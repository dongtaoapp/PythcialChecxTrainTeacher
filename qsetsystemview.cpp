#include "qsetsystemview.h"
#include "ui_qsetsystemview.h"
#include "define.h"
#include <QIcon>
#include <QPainter>
#include <qDebug>
#include <QtCore/qmath.h>
QSetSystemView::QSetSystemView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QSetSystemView)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏
    ViewInit();
    connect(ui->listWidget,SIGNAL(itemClicked(QListWidgetItem *)),this,SLOT(onMYItemclicked(QListWidgetItem*)));
}
QSetSystemView::~QSetSystemView()
{
    delete ui;
    qDebug()<<__FUNCTION__;
}

void QSetSystemView::ViewInit()
{
    exitItem=new QListWidgetItem(QIcon(":/images/more_signout_icon.png"),QStringLiteral("退出"),ui->listWidget);
    setItem=new QListWidgetItem(QIcon(":/images/more_set_icon.png"),QStringLiteral("设置"),ui->listWidget);
    togetherItem=new QListWidgetItem(QIcon(":/images/more_poweroff_icon.png"),QStringLiteral("同步关机"),ui->listWidget);
    aboutTtem=new QListWidgetItem(QIcon(":/images/more_about_icon.png"),QStringLiteral("关于"),ui->listWidget);
    setView= new SetItemView(this);
}

void QSetSystemView::onMYItemclicked(QListWidgetItem *item)
{
    if(item->text()==QStringLiteral("退出"))
    {
         qApp->quit();
    }
    else if(item->text()==QStringLiteral("设置"))
    {      
         this->close();
         setView->exec();
    }
    else if(item->text()==QStringLiteral("同步关机"))
    {
         emit onSetSystemCloseComputer();
    }
    else if(item->text()==QStringLiteral("关于"))
    {
         //TODO


    }
    this->close();

}
void QSetSystemView::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
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
