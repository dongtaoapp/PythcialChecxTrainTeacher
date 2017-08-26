#include "main_tab.h"
#include <qDebug>
#include <QIcon>
#include "define.h"
main_tab::main_tab(QWidget *parent):
    QTabWidget(parent)
{
   au_widget=new auscultation_widget;//听诊类
   ca_widget=new case_widget;//病例类
   co_widget=new courseware_widget;//课件类
   this->setWindowFlags(Qt::FramelessWindowHint);
   this->setTabPosition(QTabWidget::South);
   insertTabwidget();
   connect(co_widget,SIGNAL(cware_btn_id(int)),this,SIGNAL(onClickedevent(int)));
   connect(au_widget,SIGNAL(aut_btn_id(int)),this,SIGNAL(onClickedevent(int)));
   connect(ca_widget,SIGNAL(case_btn_id(int)),this,SIGNAL(onClickedevent(int)));
}

main_tab::~main_tab()
{
    au_widget->deleteLater();
    ca_widget->deleteLater();
    co_widget->deleteLater();
    qDebug()<<__FUNCTION__;
}
void main_tab::insertTabwidget()
{
    this->insertTab(MAIN_TAB_CO,co_widget,QStringLiteral(""));
    this->insertTab(MAIN_TAB_CA,ca_widget,QStringLiteral(""));
    this->insertTab(MAIN_TAB_AU,au_widget,QStringLiteral(""));
}
//void main_tab::onClickedevent(int id)
//{
//    qDebug()<<__FUNCTION__<<id;

//}
