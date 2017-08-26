#include "qtrainmainwindow.h"
#include "ui_qtrainmainwindow.h"
#include "define.h"
#include <QString>
#include <QFile>
#include <QRect>
#include <QPainter>
#include <qDebug>
#include <QPropertyAnimation>
#include <QSettings>

/****************���ؿ�**********************/

m_searchLineEdit::m_searchLineEdit(QWidget *parent):
    QWidget(parent)
{
    m_pSearchLineEdit = new QLineEdit(this);
    m_pSearchLineEdit->setObjectName("m_pSearchLineEdit");
    m_pSearchLineEdit->resize(228,26);
    pSearchButton = new QPushButton(this);
    pSearchButton->setObjectName("pSearchButton");
    pSearchButton->setCursor(Qt::PointingHandCursor);
    pSearchButton->setFixedSize(22, 26);
    pSearchButton->setToolTip(QStringLiteral("����"));
    //��ֹ�ı�����������λ�ڰ�ť֮��
    QMargins margins = m_pSearchLineEdit->textMargins();
    m_pSearchLineEdit->setTextMargins(margins.left(), margins.top(), pSearchButton->width(), margins.bottom());
    m_pSearchLineEdit->setPlaceholderText(QStringLiteral("��������������"));

    pSearchLayout = new QHBoxLayout();
    pSearchLayout->addStretch();
    pSearchLayout->addWidget(pSearchButton);
    pSearchLayout->setSpacing(0);
    pSearchLayout->setContentsMargins(0, 0, 0, 0);
    m_pSearchLineEdit->setLayout(pSearchLayout);
    connect(pSearchButton, SIGNAL(clicked(bool)), this, SLOT(onSearch()));
}
m_searchLineEdit::~m_searchLineEdit()
{
    this->deleteLater();
    //delete search_btn;
}

void m_searchLineEdit::onSearch()
{
   QString str=m_pSearchLineEdit->text();
   if(!str.isEmpty())
   {
       qDebug()<<str;
       emit search(str);
   }
}





/*****************������****************************/

QTrainMainWindow::QTrainMainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QTrainMainWindow)
{
    ui->setupUi(this);
    this->setObjectName("QTrainMainWindow");
    this->resize(WINDOWWIDTH,WINDOWHEIGHT);
    this->setWindowFlags(Qt::FramelessWindowHint);//ȥ��������
    compareview=new QCompareView(this);
    compareview->move(380,71);
    sheduleView=new QChoseCurriculumView;
    talkwindow=new TalkbackView;
    talkwindow->setTablenum(20);

    m_play=false;
    sys=false;

    CurriculumID=QString("-1");

    this->windowInit();
    loadqss();
    connect(m_close_btn,SIGNAL(clicked(bool)),this,SLOT(close()));
    connect(m_min_btn,SIGNAL(clicked()),this,SLOT(showMinimized()));


    connect(talk_btn,SIGNAL(clicked()),this,SLOT(ontalkbtn()));


    connect(play_btn,SIGNAL(clicked()),this,SLOT(onPlaybtn()));
    connect(flash_widget,SIGNAL(FSCommand(QString,QString)),this,SLOT(flashAction(QString,QString)));
    connect(m_tab,SIGNAL(currentChanged(int)),this,SLOT(onTabchange(int)));
    connect(m_tab,SIGNAL(onClickedevent(int)),this,SLOT(onTabBtnClicked(int)));
    connect(ui->IdentifyauscultationBtn,SIGNAL(clicked(bool)),this,SLOT(onIdentifyauscultationBtn()));
    connect(sheduleBtn,SIGNAL(clicked(bool)),sheduleView,SLOT(exec()));

    connect(sheduleView,SIGNAL(CLNum(QString &)),this,SLOT(setCurriculumID(QString &)));

    connect(sysTemBtn,SIGNAL(clicked(bool)),systemView,SLOT(show()));

    connect(systemView,SIGNAL(onSetSystemCloseComputer()),&m_manager,SLOT(closeClientWindow()));


    /*********�Խ�������Qmanager*************/

    connect(&m_manager,SIGNAL(ClientState(int,int)),talkwindow,SLOT(setTestbedState(int,int)));

    /*************************************   �������� **********/
    QString str=QString(QStringLiteral("file:///D:/��������.swf"));
    loadflash(str);
    QString path=QString(QStringLiteral("�����ڵ�λ��:%1")).arg(str);
    setPathshow(path);
}

QTrainMainWindow::~QTrainMainWindow()
{
    delete ui;
    delete talkwindow;
    delete sheduleView;
    delete touchTrain;
    qDebug()<<__FUNCTION__;
}



void QTrainMainWindow::ontest()
{
    m_manager.speakAndlistenInit();
}


/**********�ؼ���ʼ�� λ�� ��С******************/
void QTrainMainWindow::windowInit()
{
    stacked_tree=new QStackedWidget(this);
    stacked_tree->setGeometry(124,71,258,656);

    m_tab=new main_tab(this);
    m_tab->setObjectName("m_tab");
    m_tab->setGeometry(0,70,124,669);

    top_label=new QLabel(this);
    top_label->setObjectName("top_label");
    top_label->setGeometry(0,0,1366,25);

    m_title_label=new QLabel(this);
    m_title_label->setObjectName("m_title_label");
    m_title_label->setGeometry(11,7,270,12);
    m_title_label->setText(QString(QStringLiteral("�������ƽ̨�����μ���ѧ�����ʦ�� �汾%1")).arg("v1.1"));

    m_log_label=new QLabel(this);
    m_log_label->setGeometry(0,25,124,46);
    m_log_label->setObjectName("m_log_title");

    m_min_btn=new QPushButton(this);
    m_min_btn->setCursor(Qt::PointingHandCursor);
    m_min_btn->setObjectName("m_min_btn");
    m_min_btn->setGeometry(1303,0,30,25);
    m_close_btn=new QPushButton(this);
    m_close_btn->setCursor(Qt::PointingHandCursor);
    m_close_btn->setObjectName("m_close_btn");
    m_close_btn->setGeometry(1336,0,30,25);

    play_btn=new QPushButton(this);
    play_btn->setObjectName("play_btn");
    play_btn->setGeometry(1282,142,44,44);
    play_btn->setCursor(Qt::PointingHandCursor);
    play_label=new QLabel(this);
    play_label->setGeometry(1288,197,31,12);
    play_label->setText(QStringLiteral("�� ��"));

    listen_btn = new QPushButton(this);
    listen_btn->setObjectName("listen_btn");
    listen_btn->setGeometry(1282,233,44,44);
    listen_btn->setCursor(Qt::PointingHandCursor);
    listen_label=new QLabel(this);
    listen_label->setGeometry(1288,288,32,12);
    listen_label->setText(QStringLiteral("�� ��"));

    speak_btn=new QPushButton(this);
    speak_btn->setGeometry(1282,324,44,44);
    speak_btn->setObjectName("speak_btn");
    speak_btn->setCursor(Qt::PointingHandCursor);
    speak_label=new QLabel(this);
    speak_label->setGeometry(1280,378,48,12);
    speak_label->setText(QStringLiteral("��������"));

    talk_btn=new QPushButton(this);
    talk_btn->setObjectName("talk_btn");
    talk_btn->setGeometry(1282,416,44,44);
    talk_btn->setCursor(Qt::PointingHandCursor);
    talk_label=new QLabel(this);
    talk_label->setGeometry(1288,469,32,12);
    talk_label->setText(QStringLiteral("�� ��"));

    teach_btn=new QPushButton(this);
    teach_btn->setObjectName("teach_btn");
    teach_btn->setGeometry(1282,507,44,44);
    teach_btn->setCursor(Qt::PointingHandCursor);
    teach_label=new QLabel(this);
    teach_label->setGeometry(1281,560,47,12);
    teach_label->setText(QStringLiteral("ȫ���ѧ"));

    bord_btn=new QPushButton(this);
    bord_btn->setObjectName("bord_btn");
    bord_btn->setGeometry(1282,598,44,44);
    bord_btn->setCursor(Qt::PointingHandCursor);
    bord_label=new QLabel(this);
    bord_label->setGeometry(1293,651,32,11);
    bord_label->setText(QStringLiteral("�� ��"));

    search_label=new QLabel(this);
    search_label->setObjectName("search_label");
    search_label->setGeometry(124,25,258,46);
    local_label=new QLabel(this);
    local_label->setObjectName("local_label");
    local_label->setGeometry(382,25,984,46);

    path_label=new QLabel(this);
    path_label->setObjectName("path_label");
    path_label->setGeometry(397,41,700,14);

    bottom_label=new QLabel(this);
    bottom_label->setObjectName("bottom_label");
    bottom_label->setAlignment(Qt::AlignCenter);
    bottom_label->setText(QStringLiteral("2017-2020 JYYXCopyRight.all right reservesed"));
    bottom_label->setGeometry(0,740,1366,28);

    touchTrainLabel=new QLabel(QStringLiteral("������ϰ"),this);
    touchTrainLabel->hide();
    touchTrainLabel->setObjectName("touchTrainLabel");
    touchTrainLabel->setGeometry(1017,42,62,15);

    image_label=new QLabel(this);
    image_label->setObjectName("image_label");
    image_label->setGeometry(1255,32,23,33);


    test=new m_searchLineEdit(this);
    test->setGeometry(133,34,228,26);

    flash_widget=new QAxWidget(this);
    flash_widget->setGeometry(396,98,844,642);
    flash_widget->setControl(QString::fromUtf8("{d27cdb6e-ae6d-11cf-96b8-444553540000}"));

    sheduleBtn=new QPushButton(this);
    sheduleBtn->setObjectName("sheduleBtn");
    sheduleBtn->setCursor(Qt::PointingHandCursor);
    sheduleBtn->setToolTip(QStringLiteral("ѡ��γ�"));
    sheduleBtn->setGeometry(1190,36,26,24);

    sysTemBtn=new QPushButton(this);
    sysTemBtn->setCursor(Qt::PointingHandCursor);
    sysTemBtn->setObjectName("sysTemBtn");
    sysTemBtn->setGeometry(1290,43,40,10);

    touchTrain=new QTouchTrainView;
    touchTrainBtn=new QPushButton(this);
    touchTrainBtn->hide();
    touchTrainBtn->setObjectName("touchTrainBtn");
    touchTrainBtn->setCursor(Qt::PointingHandCursor);
    touchTrainBtn->setGeometry(986,34,22,26);
    touchTrainBtn->setMenu(touchTrain);

   systemView=new QSetSystemView(this);
   systemView->move(1180,80);
   systemView->hide();
}

void QTrainMainWindow::loadqss()
{
    QFile file(":/qss/PhysicalCheckTrainTeacher.qss");
    if(file.open(QFile::ReadOnly))
    {
      QString str;
      str.prepend(file.readAll());
      this->setStyleSheet(str);
    }
    file.close();
}

void QTrainMainWindow::flashAction(QString cmd, QString data)
{
    qDebug()<<__FUNCTION__<<cmd<<data;

}

void QTrainMainWindow::loadflash(QString &flashpath)
{
    m_flashpath.clear();
    m_flashpath=flashpath;
    flash_widget->dynamicCall("LoadMovie(long,string)",0,flashpath);
}
/***********flash play pause**************/
void QTrainMainWindow::onPlaybtn()
{
    if(m_flashpath.isEmpty())
    {
        return;
    }
    if(m_play)
    {
        flash_widget->dynamicCall("CallFunction(string)",FLASHPAUSE);
        play_btn->setStyleSheet("border-style:none;image:url(:/images/play_button.png)");
        m_play=false;
        return;
    }
    else if(!m_play)
    {
       flash_widget->dynamicCall("CallFunction(string)",FLASHPLAY);
       play_btn->setStyleSheet("border-style:none;image:url(:/images/play_button_presed.png)");
       m_play=true;
       return;
    }

}


void QTrainMainWindow::ontalkbtn()
{
    QSettings *readconfig=new QSettings(APPPATH,QSettings::IniFormat);
    if(readconfig->value("System_Param/deskNumber").toInt()!=talkwindow->m_tabnum)
    {
        qDebug()<<__FUNCTION__<<"changing tablenum is :"<< readconfig->value("System_Param/deskNumber").toInt();
        talkwindow->setTablenum( readconfig->value("System_Param/deskNumber").toInt());
    }
    delete readconfig;
    talkwindow->exec();
}



void QTrainMainWindow::onTabchange(int index)
{
   if(index==MAIN_TAB_AU)//���������
   {        
         ui->tab_widget_label->setText(QStringLiteral("    ȫ��������      �γ̱������"));
         ui->tab_widget_left_btn->setText(QStringLiteral("ȫ��������"));
         ui->tab_widget_right_btn->setText(QStringLiteral("�γ̱������"));
   }
   else if(index==MAIN_TAB_CO)//�μ������
   {     
         ui->tab_widget_label->setText(QStringLiteral("     ȫ���γ�       �γ̱�γ�"));
         ui->tab_widget_left_btn->setText(QStringLiteral("ȫ���γ�"));
         ui->tab_widget_right_btn->setText(QStringLiteral("�γ̱�γ�"));
   }
   else if(index==MAIN_TAB_CA)//���������
   {
         ui->tab_widget_label->setText(QStringLiteral("    ȫ��������      �γ̱�������"));
         ui->tab_widget_left_btn->setText(QStringLiteral("ȫ��������"));
         ui->tab_widget_right_btn->setText(QStringLiteral("�γ̱�������"));
   }
}

void QTrainMainWindow::onTabBtnClicked(int index)
{
   if(index==ID_ABT_CWARE)
   {
       touchTrainBtn->show();
       touchTrainLabel->show();
       return;
   }
   touchTrainBtn->hide();
   touchTrainLabel->hide();
   /*
   switch(index)
   {
   case :
        break;
   default:
       break;

   }
   */
}

void QTrainMainWindow::setPathshow(QString &path)
{
    if(path.isEmpty())
    {
        return;
    }
    path_label->setText(path);
}

void QTrainMainWindow::onIdentifyauscultationBtn()
{

    compareview->startMyTimer1();
}
/************���ÿγ�ID*****************/
void QTrainMainWindow::setCurriculumID(QString &id)
{
    CurriculumID=id;
}

/*
void QTrainMainWindow::setClientState(int deskID, int State)
{

    if(State==ONLINE)
    {
        talkwindow->setTestbedState(deskID,TalkbackView::TBVONLINE);
        return;
    }
    else if(State==OFFLINE)
    {
        talkwindow->setTestbedState(deskID,TalkbackView::TBVOFFLINE);
        return;
    }
    else if(State==REQUEST)
    {
        talkwindow->setTestbedState(deskID,TalkbackView::TBVREQUEST);
        return;
    }
}
*/
void QTrainMainWindow::onSysBtn()
{

}
#if 0
void QTrainMainWindow::onSysCilecked(int index)
{
    switch(index)
    {
    case EXIT:
        this->close();
        break;
    case SET:
        //TODO


        break;
    case TOGHER:
        //TODO
        break;
    case ABOUT:
        //TODO
        break;
    }
}
#endif

/****************�������¼�����********************/
void QTrainMainWindow::mousePressEvent (QMouseEvent *event)
{

   this->xOffset = event->globalPos().rx() - this->pos().rx();
   this->yOffset = event->globalPos().ry() - this->pos().ry();
}

void QTrainMainWindow::mouseMoveEvent(QMouseEvent * event)
{
  // ���if �ж�ֻ��Ϊ�˱�֤�ǰ�ѹ�������ƶ����������϶�Ч�� �Լ��Ƿ���topLabel
  if (event->buttons() == Qt::LeftButton&&this->top_label->frameRect().contains(this->xOffset,this->yOffset))
  {
     this->move(event->globalX()-this->xOffset,event->globalY()-this->yOffset);
  }
}

void QTrainMainWindow::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);

}
