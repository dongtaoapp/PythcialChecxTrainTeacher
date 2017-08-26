#include "talkbackview.h"
#include "ui_talkbackview.h"
#include "define.h"
#include <qDebug>
#include <QVBoxLayout>
#include <QFile>
#include <QPoint>
#include <QAbstractAnimation>
#include <QPainter>
#include <QtCore/qmath.h>
TalkbackView::TalkbackView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TalkbackView)
{

    ui->setupUi(this);
    this->setObjectName("TalkbackView");
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setModal(false);
    talkback=false;
    quit=false;
    popup=false;
    close_btn=new QPushButton(this);
    close_btn->setObjectName("close_btn");
    close_btn->setGeometry(666,5,30,30);
    ui->top_label->setText(QStringLiteral("     对讲操作"));
    loadqss();

    this->setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏
    ui->scrollArea->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    ui->scrollArea->setWidgetResizable(true);
//    ui->talkback_btn->setEnabled(false);
    m_tabnum=0;
    scrollArea_widget=new QWidget;
    scrollArea_widget->setObjectName("scrollArea_widget");
    scrollArea_widget->resize(620,250);
    scrollArea_widget->setStyleSheet("QCheckBox {font-size:12px;font-weight:normal}"
                                     "QCheckBox::indicator:checked {image:url(:/images/Check-box--(Checked).png)}"
                                     "QCheckBox::indicator:unchecked {image:url(:/images/Check-box-(hover).png)}");




    connect(ui->chose_all,SIGNAL(stateChanged(int)),this,SLOT(all_chose(int)));
    connect(ui->popup_chex,SIGNAL(stateChanged(int)),this,SLOT(popup_chose(int)));
    connect(ui->talkback_btn,SIGNAL(clicked(bool)),this,SLOT(on_talkback_btn()));
    connect(ui->quit_btn,SIGNAL(clicked(bool)),this,SLOT(on_quitbtn()));
    connect(ui->allow_btn,SIGNAL(clicked(bool)),this,SLOT(on_allowbtn()));

    connect(ui->stop_btn,SIGNAL(clicked(bool)),this,SIGNAL(stop_talkback()));
    connect(ui->remove_btn,SIGNAL(clicked()),this,SLOT(on_removebtn()));
    connect(close_btn,SIGNAL(clicked()),this,SLOT(close()));

    connect(this,SIGNAL(m_move()),this,SLOT(slotMove()));
}

TalkbackView::~TalkbackView()
{
     delete ui;
     scrollArea_widget->deleteLater();
     QMapIterator<int,QCheckBox *> iter(testbed_map);
     while(iter.hasNext())
     {
         iter.next();
         delete iter.value();
     }
    qDebug()<<__FUNCTION__;
}

void TalkbackView::loadqss()
{
    QFile file(":/qss/talkwindow.qss");
    if(file.open(QFile::ReadOnly))
    {
      QString str;
      str.prepend(file.readAll());
      this->setStyleSheet(str);
    }
    file.close();
}


void TalkbackView::setTablenum(int num)
{
    QMapIterator<int,QCheckBox *> iter(testbed_map);
    while(iter.hasNext())
    {
        iter.next();
        delete iter.value();
    }
    testbed_map.clear();
    m_tabnum=num;
    tableInit();
}
void TalkbackView::stateInit()
{
    QMapIterator<int, chexbox_state> iter(tab_state_map);
    while(iter.hasNext())
    {
        iter.next();
        if(iter.value()==TBVREQUEST)
        {
            qDebug()<<__FUNCTION__<<"TBVREQUEST ::Skey :"<<iter.key();
          testbed_map.find(iter.key()).value()->setStyleSheet(REQUEST_ICON);
        }
        if(iter.value()==TBVONLINE)
        {
            qDebug()<<__FUNCTION__<<"TBVONLINE ::key :"<<iter.key();
         testbed_map.find(iter.key()).value()->setStyleSheet(ONLINE_ICON);
        }
        if(iter.value()==TBVOFFLINE)
        {
            qDebug()<<__FUNCTION__<<"TBVOFFLINE ::key :"<<iter.key();
          testbed_map.find(iter.key()).value()->setStyleSheet(OFFLINE_ICON);
        }
    }
}

/*
 * 试验台位置
 */
void TalkbackView::tableInit()
{
    if(m_tabnum==0)
    {
        return;
    }
    if(m_tabnum>12)
    {
        scrollArea_widget->setMinimumSize(600,10000);
    }
    for(int i=1;i<=m_tabnum;i++)
    {
         QCheckBox *box=new QCheckBox(scrollArea_widget);
         box->setLayoutDirection(Qt::RightToLeft);
         box->setText(QString(QStringLiteral("试验台%1 ")).arg(i));
         testbed_map.insert(i,box);
         box->setStyleSheet(OFFLINE_ICON);
         box->resize(CHEXBOX_WIDTH,CHEXBOX_HEIGHT);
         if(i==1)
         {
             box->move(INTERVAL,INTERVAL);
         }
         if(i==2)
         {
             box->move(INTERVAL*2+CHEXBOX_WIDTH,INTERVAL);
         }
         if(i==3)
         {
             box->move(INTERVAL*3+CHEXBOX_WIDTH*2,INTERVAL);
         }
         if(i==4)
         {
             box->move(INTERVAL*4+CHEXBOX_WIDTH*3,INTERVAL);
         }
         if((i-1)%4==0)
         {
             int num=(i-1)/4;
             box->move(INTERVAL,INTERVAL*(num+1)+CHEXBOX_HEIGHT*num);
         }
         if((i-2)%4==0)
         {
             int num=(i-2)/4;
             box->move(INTERVAL*2+CHEXBOX_WIDTH,INTERVAL*(num+1)+CHEXBOX_HEIGHT*num);

         }
         if((i-3)%4==0)
         {
             int num=(i-3)/4;
             box->move(INTERVAL*3+CHEXBOX_WIDTH*2,INTERVAL*(num+1)+CHEXBOX_HEIGHT*num);
         }
         if((i-4)%4==0)
         {
             int num=(i-4)/4;
             box->move(INTERVAL*4+CHEXBOX_WIDTH*3,INTERVAL*(num+1)+CHEXBOX_HEIGHT*num);
         }
    }
   ui->scrollArea->setWidget(scrollArea_widget);
   stateInit();
}
/*
 * 全选checxbox槽函数
 */
void TalkbackView::all_chose(int chose)
{
    QMapIterator<int,QCheckBox *> iter(testbed_map);
    if(chose)
    {
     while(iter.hasNext())
     {
         iter.next();
         iter.value()->setChecked(true);
      }
    }
    else
    {
        while(iter.hasNext())
        {
            iter.next();
            iter.value()->setChecked(false);
         }
    }
}

/***学生请求弹出槽函数*****/
void TalkbackView::popup_chose(int chose)
{
    if(chose)
    {
        popup=true;
    }
    else
    {
        popup=false;
    }
    emit signal_popup(popup);
}

/*
 * 对讲测试按钮的槽函数
 */

# if 0
void TalkbackView::on_talkback_btn()
{
    if(!talkback)
    {
       //TODO

       talkback=true;
       ui->talkback_btn->setText(QStringLiteral("正在进行对讲.."));
       emit StartOrStopTalk(true);
       return;
    }
    else if(talkback)
    {
        //TODO

       talkback=false;
       ui->talkback_btn->setText(QStringLiteral("对讲结束.."));
       emit StartOrStopTalk(false);
       return;
    }
}
#endif
void TalkbackView::on_quitbtn()
{
    if(!quit)
    {
        //执行非静音操作

        quit=true;
        return;
    }
    else if(quit)
    {
        //执行静音操作

        quit=false;
        return;
    }
}

/*
 *移除请求的槽函数
 */
void TalkbackView::on_removebtn()
{

    QMapIterator<int, chexbox_state> iter(tab_state_map);
    while(iter.hasNext())
    {
        iter.next();
        if(iter.value()==TBVREQUEST)
        {
            qDebug()<<__FUNCTION__<<"key :"<<iter.key();
            setTestbedState(iter.key(),ONLINE);
        }
    }
}
/*
 * 允许发言槽函数
 */

QList<int> TalkbackView::on_allowbtn()
{
  QList<int > allow_id_list;
  QMapIterator<int,QCheckBox *> iter(testbed_map);
  while(iter.hasNext())
     {
         iter.next();  ///放在前面
         if(iter.value()->isChecked())
         {
             allow_id_list.append(iter.key());
             qDebug()<<__FUNCTION__<<"bed id :"<<iter.key();
         }
     }
 return allow_id_list;
}

/*
 * 设置窗口状态
 */
bool TalkbackView::setTestbedState(int id, int state)
{
    if(id>m_tabnum)
    {
        qDebug()<<__FUNCDNAME__<<"id error";
        return false;
    }
    if(state==ONLINE)
    {
        testbed_map.find(id).value()->setStyleSheet(ONLINE_ICON);
        tab_state_map.insert(id,TBVONLINE);
        return true;
    }
    else if(state==OFFLINE)
    {
        testbed_map.find(id).value()->setStyleSheet(OFFLINE_ICON);
        tab_state_map.insert(id,TBVOFFLINE);
        return true;
    }
    else if(state==REQUEST)
    {
        testbed_map.find(id).value()->setStyleSheet(REQUEST_ICON);
        tab_state_map.insert(id,TBVREQUEST);
        return true;
    }
}

/************对讲界面事件函数**************/
void TalkbackView::mousePressEvent (QMouseEvent *event)
{
   this->xOffset = event->globalPos().rx() - this->pos().rx();
   this->yOffset = event->globalPos().ry() - this->pos().ry();
}

void TalkbackView::mouseMoveEvent(QMouseEvent * event)
{
    if (event->buttons() == Qt::LeftButton&&ui->top_label->frameRect().contains(this->xOffset,this->yOffset))
    {
       this->move(event->globalX()-this->xOffset,event->globalY()-this->yOffset);
    }
}
void TalkbackView::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    /***********画背影**************/
    QPainterPath path;
    path.setFillRule(Qt::WindingFill);
    path.addRect(10, 10, this->width()-20, this->height()-20);
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.fillPath(path, QBrush(Qt::white));
    QColor color(0, 0, 0, 50);
    for(int i=0; i<10; i++)
    {
        QPainterPath path;
        path.setFillRule(Qt::WindingFill);
        path.addRect(10-i, 10-i, this->width()-(10-i)*2, this->height()-(10-i)*2);
        color.setAlpha(150 - qSqrt(i)*50);
        painter.setPen(color);
        painter.drawPath(path);
    }

}
void TalkbackView::slotMove()
{
       QPropertyAnimation *pAnimation = new QPropertyAnimation(this, "pos");
        pAnimation->setDuration(500);
        pAnimation->setLoopCount(2);
        pAnimation->setKeyValueAt(0, QPoint(geometry().x() - 3, geometry().y() - 3));
        pAnimation->setKeyValueAt(0.1, QPoint(geometry().x() + 3, geometry().y() + 3));
        pAnimation->setKeyValueAt(0.2, QPoint(geometry().x() - 3, geometry().y() + 3));
        pAnimation->setKeyValueAt(0.3, QPoint(geometry().x() + 3, geometry().y() - 3));
        pAnimation->setKeyValueAt(0.4, QPoint(geometry().x() - 3, geometry().y() - 3));
        pAnimation->setKeyValueAt(0.5, QPoint(geometry().x() + 3, geometry().y() + 3));
    //    pAnimation->setKeyValueAt(0.6, QPoint(geometry().x() - 3, geometry().y() + 3));
    //    pAnimation->setKeyValueAt(0.7, QPoint(geometry().x() + 3, geometry().y() - 3));
     //   pAnimation->setKeyValueAt(0.8, QPoint(geometry().x() - 3, geometry().y() - 3));
     //  pAnimation->setKeyValueAt(0.9, QPoint(geometry().x() + 3, geometry().y() + 3));
     //  pAnimation->setKeyValueAt(1, QPoint(geometry().x() - 3, geometry().y() - 3));
        pAnimation->start(QAbstractAnimation::DeleteWhenStopped);
}
