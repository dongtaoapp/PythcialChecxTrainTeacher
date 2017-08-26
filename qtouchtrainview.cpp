#include "qtouchtrainview.h"
#include <qDebug>
QTouchTrainView::QTouchTrainView(QWidget *parent):
    QMenu(parent)
{

    sonMenu=new QMenu(QStringLiteral("腹部及其他脏器异常疼痛触诊"));
    actionInit();
    connect(this,SIGNAL(triggered(QAction*)),this,SLOT(onActionClicked(QAction*)));

}

QTouchTrainView::~QTouchTrainView()
{
    delete sonMenu;
    qDebug()<<__FUNCTION__;

}
void QTouchTrainView::sonMenuActionInit()
{

    actio18=new QAction(QStringLiteral("胃溃疡压痛"));
    actio18->setData(18);
     sonMenu->addAction(actio18);

    actio19=new QAction(QStringLiteral("十二指肠溃疡压痛"));
    actio19->setData(19);
     sonMenu->addAction(actio19);

    actio20=new QAction(QStringLiteral("胰腺炎压痛"));
    actio20->setData(20);
     sonMenu->addAction(actio20);

    actio21=new QAction(QStringLiteral("胰腺炎反跳痛"));
    actio21->setData(21);
     sonMenu->addAction(actio21);

    actio22=new QAction(QStringLiteral("阑尾炎压痛"));
    actio22->setData(22);
     sonMenu->addAction(actio22);

    actio23=new QAction(QStringLiteral("阑尾炎反跳痛"));
    actio23->setData(23);
     sonMenu->addAction(actio23);

    actio24=new QAction(QStringLiteral("腹部小肠压痛"));
    actio24->setData(24);
    sonMenu->addAction(actio24);
    actio25=new QAction(QStringLiteral("腹部小肠反跳痛"));
    actio25->setData(25);
    sonMenu->addAction(actio25);
    actio26=new QAction(QStringLiteral("乙状结肠压痛"));
    actio26->setData(26);
     sonMenu->addAction(actio26);
}
void QTouchTrainView::actionInit()
{
    actio1=new QAction(QStringLiteral("肝 胆囊 脾均未触及"));
    actio1->setData(1);
    this->addAction(actio1);

    actio2=new QAction(QStringLiteral("肝肿大1厘米(肋下1指)，质地软"));
    actio2->setData(2);
    this->addAction(actio2);

    actio3=new QAction(QStringLiteral("肝肿大3厘米(肋下2指)，质地中"));
    actio3->setData(3);
    this->addAction(actio3);

    actio4=new QAction(QStringLiteral("肝肿大7厘米(肋下4指)，质地硬"));
    actio4->setData(4);
    this->addAction(actio4);
    this->addSeparator();

    actio5=new QAction(QStringLiteral("胆囊触动"));
    actio5->setData(5);
    this->addAction(actio5);

    actio6=new QAction(QStringLiteral("墨菲征阳性"));
    actio6->setData(6);
    this->addAction(actio6);

    actio7=new QAction(QStringLiteral("胆囊肿大，触痛不明显"));
    actio7->setData(7);
    this->addAction(actio7);
    this->addSeparator();

    actio8=new QAction(QStringLiteral("脾肿大2厘米（肋下1指）"));
    actio8->setData(8);
    this->addAction(actio8);

    actio9=new QAction(QStringLiteral("脾肿大5厘米（肋下3指）"));
    actio9->setData(9);
    this->addAction(actio9);

    actio10=new QAction(QStringLiteral("脾肿大7厘米（肋下4指）"));
    actio10->setData(10);
    this->addAction(actio10);
    this->addSeparator();

    actio11=new QAction(QStringLiteral("肝肿大1厘米质地软(肋下1指) 脾肿大2厘米（肋下1指）"));
    actio11->setData(11);
    this->addAction(actio11);

    actio12=new QAction(QStringLiteral("肝肿大2厘米质地软(肋下1指) 墨菲征阳性"));
    actio12->setData(12);
    this->addAction(actio12);

    actio13=new QAction(QStringLiteral("肝肿大2厘米质地软(肋下1指) 墨菲征阳性 脾肿大2厘米(肋下1指)"));
    actio13->setData(13);
    this->addAction(actio13);

    actio14=new QAction(QStringLiteral("肝肿大3厘米质地中等(肋下2指) 脾肿大2厘米(肋下1指)"));
    actio14->setData(14);
    this->addAction(actio14);

    actio15=new QAction(QStringLiteral("肝肿大3厘米质地中等(肋下2指) 脾肿大1厘米(肋下1指)"));
    actio15->setData(15);
    this->addAction(actio15);

    actio16=new QAction(QStringLiteral("肝肿大3厘米质地中等(肋下2指) 脾肿大3厘米(肋下2指)"));
    actio16->setData(16);
    this->addAction(actio16);

    actio17=new QAction(QStringLiteral("肝肿大7厘米质地中硬(肋下4指) 脾肿大5厘米(肋下3指)"));
    actio17->setData(17);
    this->addAction(actio17);

    this->addSeparator();

     sonMenuActionInit();
    this->addMenu(sonMenu);

    actio27=new QAction(QStringLiteral("乳房异常包块"));

    actio27->setData(27);

    this->addAction(actio27);
}
void QTouchTrainView::onActionClicked(QAction *action)
{
    qDebug()<<__FUNCTION__<<action->text()<<action->data().toInt();
    emit onitemClicked(action->data().toInt());
}
