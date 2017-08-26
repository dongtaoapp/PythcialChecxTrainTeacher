#include "case_widget.h"
#include "ui_case_widget.h"
#include <qDebug>
#include <QStyleOption>
#include <QPainter>
#include "define.h"
case_widget::case_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::case_widget)
{
    ui->setupUi(this);
    this->setObjectName("case_widget");
    hs=false;
    abs=false;
    bbgs=false;

    ui->hs->setCheckable(true);


    ui->hs->setStyleSheet(TOPBUTTON_CLOSE);
    ui->abs->setStyleSheet(TOPBUTTON_CLOSE);
    ui->bbgs->setStyleSheet(TOPBUTTON_CLOSE);

    QString str="QPushButton:focus{border-image:url(:/images/clicked.png)}"
                "QPushButton{background-color:#3099e5;color:white;;border-style: none;}";
    this->setStyleSheet(str);
    hs_all=new QPushButton(QStringLiteral("全部"),this);
    hs_all->resize(BTN_TAB_WIDTH,BTN_TAB_HEIGHT);
    hs_adult=new QPushButton(QStringLiteral("成人"),this);
    hs_adult->resize(BTN_TAB_WIDTH,BTN_TAB_HEIGHT);
    hs_child=new QPushButton(QStringLiteral("儿童"),this);
    hs_child->resize(BTN_TAB_WIDTH,BTN_TAB_HEIGHT);
    hs_old=new QPushButton(QStringLiteral("老人"),this);
    hs_old->resize(BTN_TAB_WIDTH,BTN_TAB_HEIGHT);
    hs_hide();


    ui->abs->setCheckable(true);
    abs_all=new QPushButton(QStringLiteral("全部"),this);
    abs_all->resize(BTN_TAB_WIDTH,BTN_TAB_HEIGHT);
    abs_adult=new QPushButton(QStringLiteral("成人"),this);
    abs_adult->resize(BTN_TAB_WIDTH,BTN_TAB_HEIGHT);
    abs_child=new QPushButton(QStringLiteral("儿童"),this);
    abs_child->resize(BTN_TAB_WIDTH,BTN_TAB_HEIGHT);
    abs_old=new QPushButton(QStringLiteral("老人"),this);
    abs_old->resize(BTN_TAB_WIDTH,BTN_TAB_HEIGHT);
    abs_hide();

    ui->bbgs->setCheckable(true);
    bbgs_all=new QPushButton(QStringLiteral("全部"),this);
    bbgs_all->resize(BTN_TAB_WIDTH,BTN_TAB_HEIGHT);
    bbgs_adult=new QPushButton(QStringLiteral("成人"),this);
    bbgs_adult->resize(BTN_TAB_WIDTH,BTN_TAB_HEIGHT);
    bbgs_child=new QPushButton(QStringLiteral("儿童"),this);
    bbgs_child->resize(BTN_TAB_WIDTH,BTN_TAB_HEIGHT);
    bbgs_old=new QPushButton(QStringLiteral("老人"),this);
    bbgs_old->resize(BTN_TAB_WIDTH,BTN_TAB_HEIGHT);
    bbgs_hide();

    connect(ui->hs,SIGNAL(clicked(bool)),this,SLOT(onhsclicked(bool)));
    connect(ui->abs,SIGNAL(clicked(bool)),this,SLOT(onabsclicked(bool)));
    connect(ui->bbgs,SIGNAL(clicked(bool)),this,SLOT(onbbgsclicked(bool)));

    connect(hs_all,SIGNAL(clicked()),this,SLOT(on_hs_all()));
    connect(hs_adult,SIGNAL(clicked()),this,SLOT(on_hs_adult()));
    connect(hs_child,SIGNAL(clicked()),this,SLOT(on_hs_child()));
    connect(hs_old,SIGNAL(clicked()),this,SLOT(on_hs_old()));

    connect(abs_all,SIGNAL(clicked()),this,SLOT(on_abs_all()));
    connect(abs_adult,SIGNAL(clicked()),this,SLOT(on_abs_adult()));
    connect(abs_child,SIGNAL(clicked()),this,SLOT(on_abs_child()));
    connect(abs_old,SIGNAL(clicked()),this,SLOT(on_abs_old()));

    connect(bbgs_all,SIGNAL(clicked()),this,SLOT(on_bbgs_all()));
    connect(bbgs_adult,SIGNAL(clicked()),this,SLOT(on_bbgs_adult()));
    connect(bbgs_child,SIGNAL(clicked()),this,SLOT(on_bbgs_child()));
    connect(bbgs_old,SIGNAL(clicked()),this,SLOT(on_bbgs_old()));

}

case_widget::~case_widget()
{
    delete ui;
    qDebug()<<__FUNCTION__;
}
void case_widget::paintEvent(QPaintEvent *event)
{

    Q_UNUSED(event);
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

void case_widget::onhsclicked(bool clicked)
{
   Q_UNUSED(clicked);
   bbgs_hide();
   ui->bbgs->setStyleSheet(TOPBUTTON_CLOSE);
   bbgs=false;

   abs_hide();
   ui->abs->setStyleSheet(TOPBUTTON_CLOSE);
   abs=false;

   ui->abs->move(0,BTN_TOP_BTN_HEIGHT+2);
   ui->bbgs->move(0,BTN_TOP_BTN_HEIGHT*2+2);
   if(!hs)
   {
        ui->hs->setStyleSheet(TOPBUTTON_OPEN);
        hs_btns_place();
        hs_show();
        ui->abs->move(0,BTN_TAB_HEIGHT*4+BTN_TOP_BTN_HEIGHT+5);
        ui->bbgs->move(0,BTN_TAB_HEIGHT*4+BTN_TOP_BTN_HEIGHT*2+6);
        hs=true;
        return;
   }
   else if(hs)
   {
       ui->hs->setStyleSheet(TOPBUTTON_CLOSE);
       hs_hide();
       ui->abs->move(0,BTN_TOP_BTN_HEIGHT+1);
       ui->bbgs->move(0,BTN_TOP_BTN_HEIGHT*2+2);
       hs=false;
   }

}

void case_widget::onabsclicked(bool clicked)
{
  Q_UNUSED(clicked);
  hs_hide();
  ui->hs->setStyleSheet(TOPBUTTON_CLOSE);
  hs=false;

  bbgs_hide();
  ui->bbgs->setStyleSheet(TOPBUTTON_CLOSE);
  bbgs=false;

  ui->bbgs->move(0,BTN_TOP_BTN_HEIGHT*2+2);

  if(!abs)
  {
    ui->abs->setStyleSheet(TOPBUTTON_OPEN);
    abs_btns_place();
    abs_show();
    ui->abs->move(0,BTN_TOP_BTN_HEIGHT+1);
    ui->bbgs->move(0,BTN_TAB_HEIGHT*4+BTN_TOP_BTN_HEIGHT*2+6);
    abs=true;
    return;
 }
  else if(abs)
  {
      ui->abs->setStyleSheet(TOPBUTTON_CLOSE);
      abs_hide();
      ui->bbgs->move(0,BTN_TOP_BTN_HEIGHT*2+2);
      abs=false;
      return;
  }
}

void case_widget::onbbgsclicked(bool clicked)
{
   Q_UNUSED(clicked);
   hs_hide();
   ui->hs->setStyleSheet(TOPBUTTON_CLOSE);
   hs=false;

   abs_hide();
   ui->abs->setStyleSheet(TOPBUTTON_CLOSE);
   abs=false;
   ui->abs->move(0,BTN_TOP_BTN_HEIGHT+1);

   if(!bbgs)
   {
       ui->bbgs->setStyleSheet(TOPBUTTON_OPEN);
       bbgs_btn_place();
       bbgs_show();
       ui->bbgs->move(0,BTN_TOP_BTN_HEIGHT*2+2);
       ui->abs->move(0,BTN_TOP_BTN_HEIGHT+1);
       bbgs=true;
       return;
   }
   else if(bbgs)
   {
       ui->bbgs->setStyleSheet(TOPBUTTON_CLOSE);
       bbgs_hide();
       ui->abs->move(0,BTN_TOP_BTN_HEIGHT+1);
       bbgs=false;
       return;
   }

}

void case_widget::hs_hide()
{
    hs_adult->hide();
    hs_old->hide();
    hs_child->hide();
    hs_all->hide();

}
void case_widget::hs_show()
{
    hs_adult->show();
    hs_old->show();
    hs_child->show();
    hs_all->show();
}
void case_widget::bbgs_hide()
{
    bbgs_adult->hide();
    bbgs_all->hide();
    bbgs_old->hide();
    bbgs_child->hide();


}
void case_widget::bbgs_show()
{

    bbgs_adult->show();
    bbgs_all->show();
    bbgs_old->show();
    bbgs_child->show();

}
void case_widget::abs_hide()
{
    abs_all->hide();
    abs_adult->hide();
    abs_child->hide();
    abs_old->hide();

}

void case_widget::abs_show()
{

    abs_all->show();
    abs_adult->show();
    abs_child->show();
    abs_old->show();
}

void case_widget::hs_btns_place()
{
  hs_all->move(0,BTN_TOP_BTN_HEIGHT+1);
  hs_adult->move(0,BTN_TAB_HEIGHT+BTN_TOP_BTN_HEIGHT+2);
  hs_child->move(0,BTN_TAB_HEIGHT*2+BTN_TOP_BTN_HEIGHT+3);
  hs_old->move(0,BTN_TAB_HEIGHT*3+BTN_TOP_BTN_HEIGHT+4);

}

void case_widget::abs_btns_place()
{
  abs_all->move(0,BTN_TOP_BTN_HEIGHT*2+2);
  abs_adult->move(0,BTN_TAB_HEIGHT*1+BTN_TOP_BTN_HEIGHT*2+3);
  abs_child->move(0,BTN_TAB_HEIGHT*2+BTN_TOP_BTN_HEIGHT*2+4);
  abs_old->move(0,BTN_TAB_HEIGHT*3+BTN_TOP_BTN_HEIGHT*2+5);
}

void case_widget::bbgs_btn_place()
{
  bbgs_all->move(0,BTN_TOP_BTN_HEIGHT*3+3);
  bbgs_adult->move(0,BTN_TAB_HEIGHT*1+BTN_TOP_BTN_HEIGHT*3+4);
  bbgs_child->move(0,BTN_TAB_HEIGHT*2+BTN_TOP_BTN_HEIGHT*3+5);
  bbgs_old->move(0,BTN_TAB_HEIGHT*3+BTN_TOP_BTN_HEIGHT*3+6);
}

void case_widget::on_hs_all()
{
   emit case_btn_id(ID_HS_ALL_CASE);
}
void case_widget::on_hs_adult()
{
    emit case_btn_id(ID_HS_ADULT_CASE);
}

void case_widget::on_hs_child()
{
    emit case_btn_id(ID_HS_CHILD_CASE);
}
void case_widget::on_hs_old()
{
    emit case_btn_id(ID_HS_OLD_CASE);
}



void case_widget::on_abs_all()
{
    emit case_btn_id(ID_ABS_ALL_CASE);
}
void case_widget::on_abs_adult()
{
    emit case_btn_id(ID_ABS_ADULT_CASE);
}
void case_widget::on_abs_child()
{
    emit case_btn_id(ID_ABS_CHILD_CASE);
}
void case_widget::on_abs_old()
{
    emit case_btn_id(ID_ABS_OLD_CASE);
}


void case_widget::on_bbgs_all()
{
    emit case_btn_id(ID_BBGS_ALL_CASE);
}
void case_widget::on_bbgs_adult()
{
    emit case_btn_id(ID_BBGS_ADULT_CASE);
}
void case_widget::on_bbgs_child()
{
    emit case_btn_id(ID_BBGS_CHILD_CASE);
}
void case_widget::on_bbgs_old()
{
    emit case_btn_id(ID_BBGS_OLD_CASE);
}
