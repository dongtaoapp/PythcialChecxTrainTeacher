#include "courseware_widget.h"
#include "ui_courseware_widget.h"
#include "define.h"
#include <qDebug>
#include <QStyleOption>
#include <QPainter>
courseware_widget::courseware_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::courseware_widget)
{
    ui->setupUi(this);
    this->setObjectName("courseware_widget");
    QString str="QPushButton:focus{border-image:url(:/images/clicked.png)}"
                "QPushButton{background-color:#3099e5;color:white;;border-style:none;}";
    this->setStyleSheet(str);
    connect(ui->abdomen_L_btn,SIGNAL(clicked(bool)),this,SLOT(on_ABL_cware()));
    connect(ui->abdomen_T_btn,SIGNAL(clicked(bool)),this,SLOT(on_ABT_cware()));
    connect(ui->ECG_btn,SIGNAL(clicked(bool)),this,SLOT(on_ECG_cware()));
    connect(ui->HT_btn,SIGNAL(clicked(bool)),this,SLOT(on_HS_cware()));
}

courseware_widget::~courseware_widget()
{
    delete ui;
    qDebug()<<__FUNCTION__;
}
void courseware_widget::on_ABL_cware()
{
    emit cware_btn_id(ID_ABL_CWARE);
}
void courseware_widget::on_ABT_cware()
{
     emit cware_btn_id(ID_ABT_CWARE);
}
void courseware_widget::on_HS_cware()
{
    emit cware_btn_id(ID_HS_CWARE);
}
void courseware_widget::on_ECG_cware()
{
    emit cware_btn_id(ID_ECG_CWARE);
}
void courseware_widget::paintEvent(QPaintEvent *event)
{

    Q_UNUSED(event);
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
