#include "qmanager.h"
#include <qDebug>
QManager::QManager()
{
    qDebug()<<__FUNCTION__;
    this->managerInit();

    connect(&m_server,SIGNAL(NotifyClientConnected(int,int)),this,SIGNAL(ClientState(int,int)));
    connect(&m_server,SIGNAL(NotifyClientConnected(int,int)),this,SLOT(UpdateClientIpList()));
    connect(&m_server,SIGNAL(NotifyClientConnected(int,int)),this,SLOT(UpdateClientIpList()));
}
QManager::~QManager()
{
    qDebug()<<__FUNCTION__;
}

void QManager::managerInit()
{
    m_server.setserverlisten(666666);
}

void QManager::UpdateClientIpList()
{
   this->ClientIpList.clear();
   m_list=m_server.clientinfoList();
   if(m_list.size()==0)
   {
        return;
   }
   for(int i=0;i<m_list.size();i++)
   {
       this->ClientIpList.append(m_list.at(i).DeskIp);
   }
     m_speak.setTalkipList(ClientIpList);


}
void QManager::speakAndlistenInit()
{
    m_listen.funbind(25000);
    m_listen.start_system_audio();
    m_speak.start_audio_to_system();
}

void QManager::closeClientWindow()
{
    m_server.allTeach_closeall();
}
