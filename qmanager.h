#ifndef QMANAGER_H
#define QMANAGER_H

#include <QObject>
#include "net_server.h"
#include "define.h"
#include "speak.h"
#include "listen.h"
#include <QString>
#include <QList>
class QManager : public QObject
{
    Q_OBJECT
public:
    QManager();
    ~QManager();
    void managerInit();
public slots:
    void speakAndlistenInit();
    void UpdateClientIpList();

    void closeClientWindow();
signals:
    void ClientState(int ,int);
private:
    net_server m_server;
    speak m_speak;
    listen m_listen;

    QStringList ClientIpList;
    QList<ClientIdIp> m_list;

};

#endif // QMANAGER_H
