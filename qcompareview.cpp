#include "qcompareview.h"
#include "ui_qcompareview.h"
#include <qDebug>
#include <QPainter>
#include <QMessageBox>
QCompareView::QCompareView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QCompareView)
{
    ui->setupUi(this);
    m_soundNum=0;
    setAutoFillBackground(true);
 //   this->setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏

    timeline1 = new QTimeLine(1000);
    timeline1->setFrameRange(0,10);
    timeline1->setCurveShape(QTimeLine::LinearCurve);
    connect(timeline1,SIGNAL(frameChanged(int)),SLOT(SLOTTimerMove1()));

    timeline2 = new QTimeLine(1000);
    timeline2->setFrameRange(0,10);
    timeline2->setCurveShape(QTimeLine::LinearCurve);
    connect(timeline2,SIGNAL(frameChanged(int)),SLOT(SLOTTimerMove2(int)));


    connect(ui->compareBtn,SIGNAL(clicked(bool)),this,SLOT(onUiCompareBtn()));
    connect(ui->deleteBtn_first,SIGNAL(clicked(bool)),this,SLOT(onUideleteBtnFirst()));
    connect(ui->deleteBtn_second,SIGNAL(clicked(bool)),this,SLOT(onUideleteBtnSecond()));
    connect(ui->empty_btn,SIGNAL(clicked(bool)),this,SLOT(onUiemityBtn()));
    connect(ui->close_btn,SIGNAL(clicked(bool)),this,SLOT(close()));
    connect(ui->hide_btn,SIGNAL(clicked()),this,SLOT(SLOTClicked()));

}

QCompareView::~QCompareView()
{
    delete ui;
    qDebug()<<__FUNCTION__;
}

void QCompareView::addComopareMsg(QString &name)
{
  m_soundNum++;
  if(ui->label_first->text().isEmpty())
  {
      ui->label_first->setText(name);
  }
  else
  {
      ui->label_second->setText(name);
  }

}
void QCompareView::onUiCompareBtn()
{
    if(ui->label_first->text().isEmpty()||ui->label_second->text().isEmpty())
    {
       QMessageBox::information(this,QStringLiteral("信息提示"),QStringLiteral("请选择两个声音才能进行对比"));
    }
    else
    {
        qDebug()<<__FUNCTION__;
        emit CompareBntCilcked();
    }
}

void QCompareView::onUideleteBtnFirst()
{
    ui->label_first->clear();
    m_soundNum--;
}
void QCompareView::onUideleteBtnSecond()
{
    ui->label_second->clear();
    m_soundNum--;
}
void QCompareView::onUiemityBtn()
{
    ui->label_first->clear();
    ui->label_second->clear();
    m_soundNum=0;
}
void QCompareView::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);

}

void QCompareView:: SLOTClicked()
{
    qDebug()<<__FUNCTION__;
    timeline2->start();
}
void QCompareView::startMyTimer1()
{
    timeline1->start();
    this->show();
    this->setGeometry(width(),0,width(),height());
}

void QCompareView::SLOTTimerMove1()
{
    move(pos().x()+30,pos().y());
}

void QCompareView::SLOTTimerMove2(int val)
{
    move(pos().x()-30,pos().y());
    if(val == 10)
    {
        this->hide();
    }
}
