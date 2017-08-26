#ifndef NET_SERVER_H
#define NET_SERVER_H
#include "define.h"
#include <QTcpServer>
#include <QTcpSocket>
#include <QStringList>
#include <QByteArray>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QMutex>

#include <QUdpSocket>



class net_server_socket:public QTcpSocket
{
  Q_OBJECT
public:
    net_server_socket();
    ~net_server_socket();

    qintptr returnDescriptor();

public slots:

    void onreadyRead();

    void ondisconnected();

signals:

    void signal_recv(QByteArray &recvMsg);

    void signal_descriptor(qintptr descriptor);
};


class net_server : public QTcpServer
{
    Q_OBJECT
public:
    net_server(QObject *parent=Q_NULLPTR);
    ~net_server();
    void sendString(QString &str);//发送字符串
    QByteArray TellClientConnectedSuucess();//告诉学生机已经连接成功
    bool setserverlisten(quint16 port);//设置服务端监听的端口

    void sendMsgtoClient(QByteArray &msg);


    QList<ClientIdIp> clientinfoList(){return clientIdIp_List;}

public:
    void control_talk_authority(QString &ip,bool talk);

    void allTeach_auscultar(bool cmd);//听诊控制接口 true 是进行听诊

    void allTeach_contralplayflash(bool cmd);//控制是否播放flash true 是播放

    void allTeach_courseware(QString &flashpath);//flash 切换 flashpath是flash路径

    void allTeach_exam(bool cmd,int exam_id=-1);//是否进行考试

    void allTeach_talk(bool cmd,QStringList &iplist);//是否进行语音(群体学生机)

    void allTeach_train(bool cmd,int train_id=-1);//进行训练

    void allTeach_closeall();//全体关机


public slots:
    void ondisconnected(qintptr descriptor);

    void onRecvmsg(QByteArray &recvmsg);

    void clientstate(QAbstractSocket::SocketState state);
protected:

    virtual void incomingConnection(qintptr handle);  //虚函数，有tcp请求时会触发

signals:
    void stringRecv(QString &str);

    void NotifyClientConnected(int , int );

    void SendCurriculumID(QString &ip);
public:

    QList<ClientIdIp> clientIdIp_List;

    QList<net_server_socket *> socketlist;

    QByteArray sendbyte;
    QJsonArray jarray;
    QJsonObject jobject;
    QJsonDocument jdocument;

    QMutex socketListmutex;
    QMutex IpIdListmutex;




};
#endif // NET_SERVER_H
