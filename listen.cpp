#include "listen.h"
#include "define.h"
#pragma execution_character_set("utf-8")

CG729Decoder::CG729Decoder()
{
    initial();
}

CG729Decoder::~CG729Decoder()
{

}

void CG729Decoder::initial()
{
    va_g729a_init_decoder();
}

void CG729Decoder::decode(unsigned char *src,short *dst,int bad_frame)
{
    va_g729a_decoder(src, dst, bad_frame);
}
listen::listen()
{
      m_port=25000;
      socket = new QUdpSocket(this);
      connect(socket, SIGNAL(readyRead()),
               this, SLOT(readyReadSlot()));
       //����������ʽ
       QAudioFormat format;
       format.setSampleRate (8000);        //���ò���Ƶ��
       format.setChannelCount (1);         //����ͨ������
       format.setSampleSize (16);          //����������С��һ��Ϊ8����16
       format.setCodec ("audio/pcm");      //���ñ����ʽ
       format.setSampleType (QAudioFormat::SignedInt);   //���ò�������
       format.setByteOrder (QAudioFormat::LittleEndian); //�����ֽ���ΪС���ֽ���
       output = new QAudioOutput(format, this);
       outdevice=Q_NULLPTR;
       connect(this,SIGNAL(signalrecvbytes(QByteArray&)),this,SLOT(star_listen(QByteArray &)));
}

listen::~listen()
{
   socket->deleteLater();
   output->deleteLater();
   outdevice->deleteLater();
   qDebug()<<__FUNCTION__;
}
bool listen::start_system_audio()
{
  if(outdevice!=Q_NULLPTR)
  {
        return false;
  }
  outdevice=output->start();
   return true;
}
void listen::stop_sys_audio()
{
    output->stop();
    outdevice=Q_NULLPTR;

}
/*
 * �󶨹㲥�˿ڽ��������Ĳɼ�
 */

void listen::funbind(quint16 port)
{
    m_port=port;
    if(socket->bind(m_port))
    {
        qDebug()<<__FUNCTION__<<"bind success";
    }
    else
    {
        qDebug()<<"bind port error"<<socket->errorString();
        return;
    }
}

/*
 * ���������н��봦�� ��д��������
 */

void listen::star_listen(QByteArray &byte_array)
{
 //   qDebug()<<__FUNCTION__<<"recv bytes="<<byte_array.size();
    if(outdevice==Q_NULLPTR)
    {
        qDebug()<<__FUNCTION__<<"output == null";
        return;
    }
    for(int i=0;i<byte_array.length()/L_FRAME_COMPRESSED;i++)
    {
        unsigned char srcAudio[L_FRAME_COMPRESSED]={'\0'};
        short dstAudio[L_FRAME]={0};
        memcpy(srcAudio,(unsigned char*)byte_array.data()+i * L_FRAME_COMPRESSED,L_FRAME_COMPRESSED);
        //G729����
        cg729Decoder.decode(srcAudio,dstAudio,0);
        //shortתchar
        tempframe.append((char *)dstAudio,L_FRAME * 2);

        if(output&&output->state()!=QAudio::StoppedState&&
                output->state()!=QAudio::SuspendedState)
        {
              int chunks = output->bytesFree()/output->periodSize();
              while (chunks)
              {
                  if (tempframe.length() >= output->periodSize())
                  {
                      //д�뵽������
                      outdevice->write(tempframe.data(),output->periodSize());
                      tempframe = tempframe.mid(output->periodSize());
                  }
                  else
                  {
                      //д�뵽������
                      outdevice->write(tempframe);
                      tempframe.clear();
                      break;
                  }
                  --chunks;
              }
         }
    }

}

/*
 * ���������вɼ�
 *
 */
void listen::readyReadSlot()
{
  //  qDebug()<<__FUNCTION__<<"start recv data";
    QByteArray datagram;
   // qDebug()<<__FUNCTION__;
    while (socket->hasPendingDatagrams())
    {
        //   qDebug()<<__FUNCTION__;
           if(socket->pendingDatagramSize()==-1)
           {
               return ;
           }
           datagram.resize(socket->pendingDatagramSize());
           QHostAddress sender;
           quint16 senderPort;
           socket->readDatagram(
           datagram.data(),
           datagram.size(),
           &sender,
           &senderPort);
           if(datagram.size()>0)
           {
             //  qDebug()<<"recv bytes ="<<datagram.size();
               emit signalrecvbytes(datagram);
           }
     }
}

