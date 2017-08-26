#include "qtalkbackmanager.h"

QTalkbackManager::QTalkbackManager()
{
    m_speak=new speak;
    m_listen=new listen;

}
QTalkbackManager::~QTalkbackManager()
{
    delete m_speak;
    delete m_listen;
}
