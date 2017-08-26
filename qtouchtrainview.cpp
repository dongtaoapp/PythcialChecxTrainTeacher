#include "qtouchtrainview.h"
#include <qDebug>
QTouchTrainView::QTouchTrainView(QWidget *parent):
    QMenu(parent)
{

    sonMenu=new QMenu(QStringLiteral("���������������쳣��ʹ����"));
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

    actio18=new QAction(QStringLiteral("θ����ѹʹ"));
    actio18->setData(18);
     sonMenu->addAction(actio18);

    actio19=new QAction(QStringLiteral("ʮ��ָ������ѹʹ"));
    actio19->setData(19);
     sonMenu->addAction(actio19);

    actio20=new QAction(QStringLiteral("������ѹʹ"));
    actio20->setData(20);
     sonMenu->addAction(actio20);

    actio21=new QAction(QStringLiteral("�����׷���ʹ"));
    actio21->setData(21);
     sonMenu->addAction(actio21);

    actio22=new QAction(QStringLiteral("��β��ѹʹ"));
    actio22->setData(22);
     sonMenu->addAction(actio22);

    actio23=new QAction(QStringLiteral("��β�׷���ʹ"));
    actio23->setData(23);
     sonMenu->addAction(actio23);

    actio24=new QAction(QStringLiteral("����С��ѹʹ"));
    actio24->setData(24);
    sonMenu->addAction(actio24);
    actio25=new QAction(QStringLiteral("����С������ʹ"));
    actio25->setData(25);
    sonMenu->addAction(actio25);
    actio26=new QAction(QStringLiteral("��״�᳦ѹʹ"));
    actio26->setData(26);
     sonMenu->addAction(actio26);
}
void QTouchTrainView::actionInit()
{
    actio1=new QAction(QStringLiteral("�� ���� Ƣ��δ����"));
    actio1->setData(1);
    this->addAction(actio1);

    actio2=new QAction(QStringLiteral("���״�1����(����1ָ)���ʵ���"));
    actio2->setData(2);
    this->addAction(actio2);

    actio3=new QAction(QStringLiteral("���״�3����(����2ָ)���ʵ���"));
    actio3->setData(3);
    this->addAction(actio3);

    actio4=new QAction(QStringLiteral("���״�7����(����4ָ)���ʵ�Ӳ"));
    actio4->setData(4);
    this->addAction(actio4);
    this->addSeparator();

    actio5=new QAction(QStringLiteral("���Ҵ���"));
    actio5->setData(5);
    this->addAction(actio5);

    actio6=new QAction(QStringLiteral("ī��������"));
    actio6->setData(6);
    this->addAction(actio6);

    actio7=new QAction(QStringLiteral("�����״󣬴�ʹ������"));
    actio7->setData(7);
    this->addAction(actio7);
    this->addSeparator();

    actio8=new QAction(QStringLiteral("Ƣ�״�2���ף�����1ָ��"));
    actio8->setData(8);
    this->addAction(actio8);

    actio9=new QAction(QStringLiteral("Ƣ�״�5���ף�����3ָ��"));
    actio9->setData(9);
    this->addAction(actio9);

    actio10=new QAction(QStringLiteral("Ƣ�״�7���ף�����4ָ��"));
    actio10->setData(10);
    this->addAction(actio10);
    this->addSeparator();

    actio11=new QAction(QStringLiteral("���״�1�����ʵ���(����1ָ) Ƣ�״�2���ף�����1ָ��"));
    actio11->setData(11);
    this->addAction(actio11);

    actio12=new QAction(QStringLiteral("���״�2�����ʵ���(����1ָ) ī��������"));
    actio12->setData(12);
    this->addAction(actio12);

    actio13=new QAction(QStringLiteral("���״�2�����ʵ���(����1ָ) ī�������� Ƣ�״�2����(����1ָ)"));
    actio13->setData(13);
    this->addAction(actio13);

    actio14=new QAction(QStringLiteral("���״�3�����ʵ��е�(����2ָ) Ƣ�״�2����(����1ָ)"));
    actio14->setData(14);
    this->addAction(actio14);

    actio15=new QAction(QStringLiteral("���״�3�����ʵ��е�(����2ָ) Ƣ�״�1����(����1ָ)"));
    actio15->setData(15);
    this->addAction(actio15);

    actio16=new QAction(QStringLiteral("���״�3�����ʵ��е�(����2ָ) Ƣ�״�3����(����2ָ)"));
    actio16->setData(16);
    this->addAction(actio16);

    actio17=new QAction(QStringLiteral("���״�7�����ʵ���Ӳ(����4ָ) Ƣ�״�5����(����3ָ)"));
    actio17->setData(17);
    this->addAction(actio17);

    this->addSeparator();

     sonMenuActionInit();
    this->addMenu(sonMenu);

    actio27=new QAction(QStringLiteral("�鷿�쳣����"));

    actio27->setData(27);

    this->addAction(actio27);
}
void QTouchTrainView::onActionClicked(QAction *action)
{
    qDebug()<<__FUNCTION__<<action->text()<<action->data().toInt();
    emit onitemClicked(action->data().toInt());
}
