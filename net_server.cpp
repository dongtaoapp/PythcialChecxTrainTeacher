#include "net_server.h"
#include <qDebug>
#include <QMapIterator>
net_server_socket::net_server_socket()
{
    qDebug()<<__FUNCTION__;
    connect(this,SIGNAL(readyRead()),this,SLOT(onreadyRead()));
    connect(this,SIGNAL(disconnected()),this,SLOT(ondisconnected()));
}

net_server_socket::~net_server_socket()
{
  this->deleteLater();
  qDebug()<<__FUNCTION__;
}

qintptr net_server_socket::returnDescriptor()
{
    return socketDescriptor();
}
void net_server_socket::onreadyRead()
{
  QByteArray recvMsg=this->readAll();
  emit signal_recv(recvMsg);
}
void net_server_socket::ondisconnected()
{
    emit signal_descriptor(this->socketDescriptor());
}

net_server::net_server(QObject *parent):
    QTcpServer(parent)
{
    QUdpSocket socket;
    QHostAddress mcast_addr("224.0.0.17");
    socket.bind(QHostAddress::AnyIPv4, 999999, QUdpSocket::ReuseAddressHint);
    socket.setSocketOption(QAbstractSocket::MulticastLoopbackOption, 0);//��ֹ��������
    socket.joinMulticastGroup(mcast_addr);//����ǹؼ��������鲥��ַ


    QString str="TEACHER_HAVE_ONLINE";
    socket.writeDatagram(str.toLatin1(),mcast_addr,999999);

    qDebug()<<__FUNCTION__;
}
net_server::~net_server()
{

    for(int i=0;i<socketlist.size();i++)
    {
        socketlist.at(i)->deleteLater();
    }
    this->deleteLater();
    qDebug()<<__FUNCTION__;
}
bool net_server::setserverlisten(quint16 port)
{
    if(port<0)
    {
        return false;
    }
    return listen(QHostAddress::AnyIPv4,port);
}
void net_server::incomingConnection(qintptr handle)  //�麯������tcp����ʱ�ᴥ��
{

    net_server_socket *socket = new net_server_socket;
    if(!socket->setSocketDescriptor(handle))
    {
        qDebug()<<socket->errorString();
        socket->deleteLater();
        return;
    }
    socket->write(TellClientConnectedSuucess());


    socketListmutex.lock();
    socketlist.append(socket);
    socketListmutex.unlock();

    connect(socket,SIGNAL(signal_recv(QByteArray&)),this,SLOT(onRecvmsg(QByteArray&)));
    connect(socket,SIGNAL(signal_descriptor(qintptr)),this,SLOT(ondisconnected(qintptr)));
    connect(socket,SIGNAL(stateChanged(QAbstractSocket::SocketState)),this,SLOT(clientstate(QAbstractSocket::SocketState)));
}

void net_server::onRecvmsg(QByteArray &recvmsg)
{
    QJsonParseError simp_json_error;

    QJsonDocument jdocument =QJsonDocument::fromJson(recvmsg,&simp_json_error);

    if(simp_json_error.error==QJsonParseError::NoError)
    {
        QJsonObject object=jdocument.object();
        if(object.isEmpty())
        {
            return;
        }
         QString type=object.value("Type").toString();
         QString cmd=object.value("cmd").toString();
         QString data=object.value("data").toString();
         if(type==QString("string"))
         {
            if(cmd=="DeskID")
            {
                ClientIdIp info;
                info.DeskId=data.section(":",0,0);
                info.DeskIp=data.section(":",1,1);
                qDebug()<<__FUNCTION__<<QString(QStringLiteral("��ѧ�������ӳɹ���ѧ������Ϣʵ��̨ID��%1 ѧ����IP:%2"))
                          .arg(data.section(":",0,0))
                          .arg(data.section(":",1,1));
                IpIdListmutex.lock();

                clientIdIp_List.append(info);

                IpIdListmutex.unlock();

                emit NotifyClientConnected(data.section(":",0,0).toInt(),ONLINE);

                /*******���͵�ǰѡ��Ŀγ̺�*******/
                emit SendCurriculumID(data.section(":",1,1));
            }
            else if(cmd=="REQUESTTALK")
            {
               emit NotifyClientConnected(data.toInt(),REQUEST);
            }

         }
    }
    else
    {
        qDebug()<<simp_json_error.errorString();
    }
}

/*
 * �ͻ���socket�Ͽ�����
 */
void net_server::ondisconnected(qintptr descriptor)
{
    int deskID=-1;
    socketListmutex.lock();
    for(int i=0;i<socketlist.size();i++)
    {
        if(socketlist.at(i)->socketDescriptor()==descriptor)
        {
          qDebug()<<socketlist.at(i)->peerAddress().toString();
          IpIdListmutex.lock();
          for(int j=0;j<clientIdIp_List.size();j++)
          {
                if(clientIdIp_List.at(j).DeskIp==socketlist.at(i)->peerAddress().toString())
                {
                    qDebug()<<__FUNCTION__<<QString(QStringLiteral("����̨��Ϊ:%1 ����̨IPΪ%2��ѧ�����Ͽ�����"))
                              .arg(clientIdIp_List.at(j).DeskId)
                              .arg(clientIdIp_List.at(j).DeskIp);
                    deskID=clientIdIp_List.at(j).DeskId.toInt();
                    clientIdIp_List.removeAt(j);
                    IpIdListmutex.unlock();
                }

          }
          socketlist.at(i)->deleteLater();

          socketlist.removeAt(i);

          socketListmutex.unlock();
      }
  }
  qDebug()<<"deskID:"<<deskID;

  emit NotifyClientConnected(deskID,OFFLINE);


  qDebug()<<"socketlist size"<<socketlist.size();
}


void net_server::clientstate(QAbstractSocket::SocketState state)
{
   qDebug()<<__FUNCTION__<<state;
}

void net_server::sendMsgtoClient(QByteArray &msg)
{
    if(msg.isEmpty())
    {
         qDebug()<<__FUNCTION__<<"msg size null";
        return ;
    }

socketListmutex.lock();
    if(socketlist.size()==0)
    {
        qDebug()<<__FUNCTION__<<"socketlist size 0";
        return ;
    }
    for(int i=0;i<socketlist.size();i++)
    {
        if(socketlist.at(i)->write(msg)!=msg.size())
        {
            continue;
        }
    }
socketListmutex.unlock();
}

QByteArray net_server::TellClientConnectedSuucess()
{
    jobject.insert("Type",QString("string"));
    jobject.insert("cmd",QString("NULL"));
    jobject.insert("data","CLIENTCONNECTEDSUCCESS");
    jdocument.setObject(jobject);
    QByteArray str=jdocument.toJson(QJsonDocument::Compact);
    return str;
}

/*
 * ������ͨ�ַ���
 */
void net_server::sendString(QString &str)
{
  jobject.insert("Type",QString("string"));
  jobject.insert("cmd",QString("NULL"));
  jobject.insert("data",str);
  jdocument.setObject(jobject);

  sendbyte=jdocument.toJson(QJsonDocument::Compact);
  sendMsgtoClient(sendbyte);
  sendbyte.clear();

}
/*
 * json ��ʽ type cmd data
 * type: flash  talk exam train auscultar closePC string play
 */
/*************flash ��غ���****************/
void net_server::allTeach_courseware(QString &flashpath)
{
   if(flashpath.isEmpty())
   {
       return;
   }
   jobject.insert("Type",QString("flash"));
   jobject.insert("cmd",QString("NULL"));
   jobject.insert("data",flashpath);
   jdocument.setObject(jobject);

   sendbyte=jdocument.toJson(QJsonDocument::Compact);
   sendMsgtoClient(sendbyte);
   sendbyte.clear();
}
void net_server::allTeach_contralplayflash(bool cmd)
{
    jobject.insert("Type",QString("play"));
    jobject.insert("cmd",cmd);
    jobject.insert("data",QString("NULL"));
    jdocument.setObject(jobject);
    sendbyte=jdocument.toJson(QJsonDocument::Compact);
    sendMsgtoClient(sendbyte);
    sendbyte.clear();
}

/*
 * �Խ���� talk��غ������õ�����Ա����
 */

void net_server::control_talk_authority(QString &ip, bool talk)
{
    jobject.insert("Type",QString("talk"));
    jobject.insert("cmd",talk);
    jobject.insert("data",ip);
    jdocument.setObject(jobject);
    sendbyte=jdocument.toJson(QJsonDocument::Compact);

   socketListmutex.lock();

    for(int i=0;i<socketlist.size();i++)
    {
          if(socketlist.at(i)->peerAddress().toString()==ip)
          {
              if(socketlist.at(i)->write(sendbyte)!=sendbyte.size())
              {
                //  socketlist.at(i)->write(sendbyte);
                  continue;
              }
         }
    }

    socketListmutex.unlock();
    sendbyte.clear();
}

# if 0
void net_server::allTeach_talk(bool cmd,QStringList &iplist)
{
    jobject.insert("Type",QString("talk"));
    jobject.insert("cmd",cmd);
    jobject.insert("data",QString("NULL"));
    jdocument.setObject(jobject);
    sendbyte=jdocument.toJson(QJsonDocument::Compact);
    if(iplist.isEmpty())
    {
        qDebug()<<__FUNCTION__<<"iplist is empty";
        return ;
    }
    for(int j=0;j<iplist.size();j++)
    {
        for(int i=0;i<socketlist.size();i++)
        {
            if(iplist.at(j)==socketlist.at(i)->peerAddress().toString())
            {

                if(socketlist.at(i)->write(sendbyte)!=sendbyte.size())
                {
                    continue;
                }
            }
        }
    }
    sendbyte.clear();
}

#endif
/*
 * ѵ����صĺ���
 */
void net_server::allTeach_train(bool cmd,int train_id)
{
    qDebug()<<train_id;
    QString string_train_id =QString::number(train_id,10);
    jobject.insert("Type",QString("train"));
    jobject.insert("cmd",cmd);
    jobject.insert("data",string_train_id);
    jdocument.setObject(jobject);
    sendbyte=jdocument.toJson(QJsonDocument::Compact);
    sendMsgtoClient(sendbyte);
    sendbyte.clear();
}
/************������غ���**********/
void net_server::allTeach_exam(bool cmd,int exam_id)
{
   qDebug()<<exam_id;
   QString string_exam_id =QString::number(exam_id,10);
   jobject.insert("Type",QString("exam"));
   jobject.insert("cmd",cmd);
   jobject.insert("data",string_exam_id);
   jdocument.setObject(jobject);
   sendbyte=jdocument.toJson(QJsonDocument::Compact);
   sendMsgtoClient(sendbyte);
   sendbyte.clear();
}
/*
 * ������غ���
 */
void net_server::allTeach_auscultar(bool cmd)
{
    jobject.insert("Type",QString("auscultar"));
    jobject.insert("cmd",cmd);
    jobject.insert("data",QString("NULL"));
    jdocument.setObject(jobject);
    sendbyte=jdocument.toJson(QJsonDocument::Compact);
    sendMsgtoClient(sendbyte);
    sendbyte.clear();
}
/*
 * �ر�ѧ������
 */
void net_server::allTeach_closeall()
{
   qDebug()<<__FUNCTION__;
  jobject.insert("Type",QString("closePC"));
  jobject.insert("cmd",QString("NULL"));
  jobject.insert("data",QString("NULL"));
  jdocument.setObject(jobject);
  sendbyte=jdocument.toJson(QJsonDocument::Compact);

  sendMsgtoClient(sendbyte);
  sendbyte.clear();
}
