#ifndef LISTEN_H
#define LISTEN_H

#include <QObject>
#include <QIODevice>
#include <QAudioFormat>
#include <QUdpSocket>
#include <QAudioOutput>

extern "C"
{
 #include "va_g729a.h"
}
class CG729Decoder
{
public:
    CG729Decoder();
    ~CG729Decoder();
    void decode(unsigned char *src,short *dst,int bad_frame);

private:
    void initial();

};
class listen: public QObject
{
    Q_OBJECT
public:
     listen();
    ~listen();
    quint16 return_m_port(){return m_port;}
public slots:

    bool start_system_audio();//开始listen

    void stop_sys_audio();//停止listen

    void readyReadSlot();

    void star_listen(QByteArray &byte_array);

    void funbind(quint16 port);//端口绑定函数
signals:
  void  signalrecvbytes(QByteArray &);
  void  signalSetport();
private:
    QIODevice *outdevice;
    QAudioOutput *output;
    QUdpSocket *socket;
    CG729Decoder cg729Decoder;
    QByteArray tempframe;

    quint16 m_port;
};

#endif // LISTEN_H
