#include "speak.h"
#include "define.h"
#include <qDebug>
#include <QAudioFormat>
#pragma execution_character_set("utf-8")

const int BUFFER_SIZE = 4096;

CG729Encoder::CG729Encoder()
{
    initial();
}

CG729Encoder::~CG729Encoder()
{

}

void CG729Encoder::initial()
{
    va_g729a_init_encoder();
}

void CG729Encoder::encode(short *src,unsigned char *dst)
{
    va_g729a_encoder(src, dst);
}

speak::speak()

{
    //设置声音格式
    QAudioFormat format;
    format.setSampleRate (8000);        //设置采样频率
    format.setChannelCount (1);         //设置通道计数
    format.setSampleSize (16);          //设置样本大小，一般为8或者16
    format.setCodec ("audio/pcm");      //设置编码格式
    format.setSampleType (QAudioFormat::SignedInt);   //设置采样类型
    format.setByteOrder (QAudioFormat::LittleEndian); //设置字节序为小端字节序
    input =  new QAudioInput(format,this);
    SOCKET =new QUdpSocket(this);
    indevice=Q_NULLPTR;
    connect(this,SIGNAL(signalSpeakdata(QByteArray&)),this,SLOT(start_speak(QByteArray &)));
    connect(input,SIGNAL(stateChanged(QAudio::State)),this,SLOT(state(QAudio::State)));
}

speak::~speak()
{
  input->deleteLater();
  SOCKET->deleteLater();
  indevice->deleteLater();
  qDebug()<<__FUNCTION__;
}
/** 将音频写入IOdevice*/
void speak::start_audio_to_system()
{
    if(indevice==Q_NULLPTR)
    {
         indevice= input->start();
    }
    else
    {
        qDebug()<<__FUNCTION__<<"indevice is not null================================";
    }
    connect(indevice,SIGNAL(readyRead()),this,SLOT(on_readyRead()));
}

//停止音频输入，与系统资源分离。

void speak::stop_voice_in()
{
    input->stop();
    indevice=Q_NULLPTR;
}
bool speak::setTalkipList(QStringList &ipList)
{
   speakListmutex.lock();

   m_iplist.clear();
   if(ipList.isEmpty())
   {
       qDebug()<<__FUNCTION__<<"ipList is empty";
       return false;
   }


   for(int i=0;i<ipList.size();i++)
   {
       m_iplist.append(ipList.at(i));
   }

   speakListmutex.unlock();
   return true;
}
/*
 * 通过UDP进行声音的广播
 */
void speak::start_speak(QByteArray &speak_data)
{

//    speakListmutex.lock();

    if(m_iplist.size()==0)
    {
       qDebug()<<__FUNCTION__<<"m_iplist size is 0";
       return;
    }
    for(int i=0;i<m_iplist.size();i++)
    {
        QHostAddress address(m_iplist.at(i));
        if(SOCKET->writeDatagram(speak_data,address, 25000)!=speak_data.size())
        {
            continue;
        }
     //speakListmutex.unlock();
    }

}
/*
 * 对监听到的声音进行处理
 */

void speak::on_readyRead()
{
    short srcAudio[L_FRAME]={0};
    unsigned char dstAudio[L_FRAME_COMPRESSED]={'\0'};
    if (input->error()!=QAudio::NoError)
    {
        qDebug() << "AudioInput Error";
        if(input->error()==QAudio::IOError)
        {
            emit error(QString("IOError"));//读/写音频设备时发生错误
        }
        else if(input->error()==QAudio::UnderrunError)
        {
            emit error(QString("UnderrunError"));//未知错误
        }
        else if(input->error()==QAudio::OpenError)
        {
            emit error(QString("OpenError"));//打开错误
        }
        else if(input->error()==QAudio::FatalError)
        {
            emit error(QString("FatalError"));//发生不可恢复的错误，音频设备此时不可用。
        }
        return;
    }

    QByteArray dataBuffer(BUFFER_SIZE,0);
    qint64 len1 = input->bytesReady();

    if (len1 > BUFFER_SIZE)
    {
        qDebug()<<"BUFFER_SIZE too small";
        return;
    }
    qint64 len2 = indevice->read(dataBuffer.data(), len1);

    tempBuffer.append(dataBuffer.data(),len2);

    for(int i=0;i<tempBuffer.length()/(L_FRAME*2);i++)
    {
        //char转short
        memcpy(srcAudio,tempBuffer.data()+i*L_FRAME*2,L_FRAME*2);
        //编码
        cg729Encoder.encode(srcAudio, dstAudio);
        QByteArray frame;
        //reinterpret_cast用于强制转换，这里将unsigned char *转换为const char *。
        frame.append(reinterpret_cast<const char*>(dstAudio),L_FRAME_COMPRESSED);
        emit signalSpeakdata(frame);
    }
    tempBuffer.clear();
}

void speak::state(QAudio::State state)
{
  qDebug()<<__FUNCTION__<<state;

}
