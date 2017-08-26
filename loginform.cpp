#include "loginform.h"
#include "ui_loginform.h"
#include "define.h"
#include <qDebug>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QListWidgetItem>
#include <QPainter>
#include <QFile>
#include <QtCore/qmath.h>
#include <QSettings>
/*******串口**********/
serialPortForm::serialPortForm(QWidget *parent):
    QListWidget(parent)
{
   this->insertItem(0,QStringLiteral("串口选择设置"));
   int i=1;
   foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
   {
           this->insertItem(i,info.portName());
           i++;
   }
   setListWidgetHeight(i);
}

serialPortForm::~serialPortForm()
{

  this->deleteLater();
  qDebug()<<__FUNCTION__;
}
void serialPortForm::setListWidgetHeight(int num)
{
    this->resize(234,32*num);
}


/*******串口界面*************/
setBtnForm::setBtnForm(QWidget *parent):
    QDialog(parent)
{
     this->setAttribute(Qt::WA_TranslucentBackground);


  this->setWindowFlags(Qt::FramelessWindowHint|Qt::WindowSystemMenuHint);//隐藏标题栏

   portForm=new serialPortForm(this);
   topLabel=new QLabel(this);
   this->resize(244,portForm->height()+15);
   formInit();
   connect(portForm,SIGNAL(itemClicked(QListWidgetItem*)),this,SLOT(onPortformItemClicked(QListWidgetItem*)));


}
setBtnForm::~setBtnForm()
{

  qDebug()<<__FUNCTION__;
}
void setBtnForm::formInit()
{
  topLabel->resize(244,10);
  topLabel->move(0,0);
  topLabel->setStyleSheet("border-style:solid;background-image:url(:/images/background.png)");
  portForm->move(5,10);
}

void setBtnForm::onPortformItemClicked(QListWidgetItem *item)
{
   QString name=item->text();
   if(name==QStringLiteral("串口选择设置"))
   {
      return;
   }
   emit portName(name);
   QSettings *configIniWrite = new QSettings(APPPATH, QSettings::IniFormat);
   configIniWrite->setValue("System_Param/Comm",name);
   delete configIniWrite;
   this->close();

}
void setBtnForm::paintEvent(QPaintEvent *event)
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

/**********登陆界面************/



LoginForm::LoginForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginForm)
{
    ui->setupUi(this);
    ischeck=false;
    btn_check=false;
    this->setObjectName("LoginForm");
    portWindow=new setBtnForm(this);
    portWindow->hide();
    windowInit();
    this->setWindowFlags(Qt::FramelessWindowHint|Qt::WindowSystemMenuHint);//隐藏标题栏
    ui->box1->setEditable(true);
    ui->box1->setView(new QListView());
    QLineEdit *lineedit= ui->box1->lineEdit();
    lineedit->setPlaceholderText(QStringLiteral("用户名"));
    ui->pwdedit->setPlaceholderText(QStringLiteral("请输入密码"));
    connect(ui->set_btn,SIGNAL(clicked()),portWindow,SLOT(show()));
    connect(ui->checkBox,SIGNAL(stateChanged(int)),this,SLOT(slot_checkstate(int)));
}

LoginForm::~LoginForm()
{
    delete ui;
    qDebug()<<__FUNCTION__;
}
void LoginForm::windowInit()
{
    this->resize(764,339);
    portWindow->move(530,21);
}

void LoginForm::slot_on_login_btn_cliced()
{
    qDebug()<<__FUNCTION__;

}

void LoginForm::show_login_name(QStringList &namelist)
{
    if(namelist.isEmpty())
    {
        return;
    }
    ui->box1->insertItems(0,namelist);
}

void LoginForm::slot_checkstate(int state)
{
    ischeck=state;
    qDebug()<<"ischeck"<<ischeck;
}
void LoginForm::slot_set_btn()
{     if(!btn_check)
      {
        portWindow->show();
        btn_check=true;
        return;
      }
     else if(btn_check)
     {

        portWindow->close();
        btn_check=false;
        return;
     }
}

void LoginForm::mousePressEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    btn_check=false;
    portWindow->close();

}
void LoginForm::paintEvent(QPaintEvent *event)
{

    Q_UNUSED(event);
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
void LoginForm::closeEvent(QCloseEvent *event)
{
    Q_UNUSED(event);
    emit m_close();

}
