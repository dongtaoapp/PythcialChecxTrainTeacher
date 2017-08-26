#include "setitemview.h"
#include "ui_setitemview.h"
#include "define.h"
#include <qDebug>
#include <QDir>
#include <QMessageBox>
SetItemView::SetItemView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SetItemView)
{
    ui->setupUi(this);
    Qt::WindowFlags flags=Qt::Dialog;
    flags |=Qt::WindowCloseButtonHint;
    setWindowFlags(flags);

    this->setWindowTitle(QStringLiteral("系统设置选项"));
    Apppath=QCoreApplication::applicationDirPath();
    ui->web_ip->setText("127.0.0.1");
    pag1_radiobtn=-1;
    pag2_radiobtn=-1;
    configInit = new QSettings(APPPATH, QSettings::IniFormat);
    this->Init();
    connect(this,SIGNAL(changPag(int)),ui->stackedWidget,SLOT(setCurrentIndex(int)));
    connect(ui->btn1,SIGNAL(clicked(bool)),this,SLOT(onBtn1()));
    connect(ui->btn2,SIGNAL(clicked(bool)),this,SLOT(onBtn2()));
    connect(ui->btn3,SIGNAL(clicked(bool)),this,SLOT(onBtn3()));
    connect(ui->cancelBtn,SIGNAL(clicked(bool)),this,SLOT(oncancelBtn()));
    connect(ui->okBtn,SIGNAL(clicked(bool)),this,SLOT(onOkbtn()));
}

SetItemView::~SetItemView()
{
    delete ui;
    delete configInit;
    qDebug()<<__FUNCTION__;
}
void SetItemView::onBtn1()
{
    emit changPag(0);
}
void SetItemView::onBtn2()
{
    emit changPag(1);
}
void SetItemView::onBtn3()
{
    emit changPag(2);
}

void SetItemView::Init()
{
    pag1_radiobtn= configInit->value("System_Param/HeartAuscultateType").toInt();
    pag2_radiobtn=configInit->value("System_Param/LoudSoundType").toInt();
    switch(pag1_radiobtn)
    {
    case 0:
        ui->radioButton->setChecked(true);
        break;
    case 1:
        ui->radioButton_2->setChecked(true);
        break;
    default:
        ui->radioButton->setChecked(true);
        break;
    }
    switch(pag2_radiobtn)
    {
    case 0:
        ui->radioButton_3->setChecked(true);
        break;
    case 1:
        ui->radioButton_4->setChecked(true);
        break;
    default:
        ui->radioButton_3->setChecked(true);
        break;
    }
    ui->spinBox->setValue(configInit->value("System_Param/deskNumber").toInt());
    ui->web_ip->setText(configInit->value("System_Param/WebIP").toString());
}
/******写入配置文件*******/
void SetItemView::onOkbtn()
{
        qDebug()<<__FUNCTION__<<Apppath;
        configInit->setValue("System_Param/deskNumber",ui->spinBox->text());
        configInit->setValue("System_Param/WebIP",ui->web_ip->text());
        if(ui->radioButton->isChecked())
        {
            configInit->setValue("System_Param/HeartAuscultateType","0");
        }
        else if(!ui->radioButton->isChecked())
        {
            configInit->setValue("System_Param/HeartAuscultateType","1");
        }
        else if(ui->radioButton_3->isChecked())
        {
            configInit->setValue("System_Param/LoudSoundType","0");
        }
        else if(!ui->radioButton_3->isChecked())
        {
            configInit->setValue("System_Param/LoudSoundType","1");
        }
        this->close();
}

void SetItemView::oncancelBtn()
{
    this->close();
}
