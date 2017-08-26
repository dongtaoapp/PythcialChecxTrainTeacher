#ifndef SPEAK_H
#define SPEAK_H
#include <QObject>
#include <QIODevice>
#include <QUdpSocket>
#include <QAudioInput>
#include <QStringList>
#include <QMutex>
#include <Windows.h>
extern "C"
{
#include "va_g729a.h"
}


class CG729Encoder
{
public:
    CG729Encoder();
    ~CG729Encoder();
    void encode(short *src,unsigned char *dst);

private:
    void initial();

};
class speak: public QObject
{
    Q_OBJECT
public:
    speak();
    ~speak();
    bool setTalkipList(QStringList &ipList);//设置udp发送的IP地址可能会用于分组语音讨论
signals:
    void signalSpeakdata(QByteArray &speak_data);
    void error(QString &error);
public slots:
    void state(QAudio::State state);
    void start_speak(QByteArray &speak_data);
    void on_readyRead();
    void stop_voice_in();//停止音频输入，与系统资源分离。
    void start_audio_to_system();//江音频设备信息输入到系统
private:
    QUdpSocket *SOCKET;
    QIODevice *indevice;
    QAudioInput *input;
    CG729Encoder cg729Encoder;
    QByteArray tempBuffer;
    QStringList m_iplist;

    QMutex speakListmutex;
};
#endif // SPEAK_H
