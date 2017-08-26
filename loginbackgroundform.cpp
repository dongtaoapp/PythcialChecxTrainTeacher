#include "loginbackgroundform.h"
#include <qDebug>
#include <QStringList>
#include <QPainter>
#include <QFile>
#include <qDebug>
LoginBackgroundForm::LoginBackgroundForm(QWidget *parnet):
    QWidget(parnet)
{
    this->setWindowFlags(Qt::FramelessWindowHint|Qt::WindowSystemMenuHint);//隐藏标题栏
    this->resize(1366,768);
    windowInit();
    loadqss();
    connect(m_close_btn,SIGNAL(clicked()),this,SLOT(close()));

}
LoginBackgroundForm::~LoginBackgroundForm()
{
    qDebug()<<__FUNCTION__;
}

void LoginBackgroundForm::windowInit()
{
    backgroundLabel=new QLabel(this);
    backgroundLabel->setObjectName("backgroundLabel");
    backgroundLabel->setGeometry(0,0,1366,743);

    m_title_label=new QLabel(this);
    m_title_label->setObjectName("m_title_label");
    m_title_label->setGeometry(11,7,253,12);
    m_title_label->setText(QString(QStringLiteral("体格检查云平台——课件教学软件 版本%1")).arg("v1.1"));

    m_close_btn=new QPushButton(this);
    m_close_btn->setCursor(Qt::PointingHandCursor);
    m_close_btn->setObjectName("m_close_btn");
    m_close_btn->setGeometry(1336,0,30,25);


    loginform=new LoginForm(this);
    loginform->setGeometry(303,209,764,339);
    QStringList list;
    list<<QStringLiteral("王老师")<<QStringLiteral("周老师")<<QStringLiteral("李老师")<<QStringLiteral("董老师");
    loginform->show_login_name(list);


}

void LoginBackgroundForm::loadqss()
{
    QFile file(":/qss/LoginForm.qss");
    if(file.open(QFile::ReadOnly))
    {
      QString str;
      str.prepend(file.readAll());
      this->setStyleSheet(str);
    }
    file.close();

}

void LoginBackgroundForm::paintEvent(QPaintEvent *event)
{

    Q_UNUSED(event);
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
void LoginBackgroundForm::closeEvent(QCloseEvent *event)
{
    Q_UNUSED(event);
    this->close();
    emit m_close();

}
