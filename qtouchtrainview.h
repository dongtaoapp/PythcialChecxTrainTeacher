#ifndef QTOUCHTRAINVIEW_H
#define QTOUCHTRAINVIEW_H

#include <QWidget>

#include <QMenu>
#include <QAction>

class QTouchTrainView :public QMenu
{
    Q_OBJECT
public:
    QTouchTrainView(QWidget *parent=Q_NULLPTR);
    ~QTouchTrainView();
    void actionInit();
    void sonMenuActionInit();
signals:
    void onitemClicked(int index);
public slots:
    void onActionClicked(QAction *action);
private:
    QMenu *sonMenu;
    QAction *actio1;
    QAction *actio2;
    QAction *actio3;
    QAction *actio4;
    QAction *actio5;
    QAction *actio6;
    QAction *actio7;
    QAction *actio8;
    QAction *actio9;
    QAction *actio10;
    QAction *actio11;
    QAction *actio12;
    QAction *actio13;
    QAction *actio14;
    QAction *actio15;
    QAction *actio16;
    QAction *actio17;
    QAction *actio18;
    QAction *actio19;
    QAction *actio20;
    QAction *actio21;
    QAction *actio22;
    QAction *actio23;
    QAction *actio24;
    QAction *actio25;
    QAction *actio26;
    QAction *actio27;
    QAction *actio28;
    QAction *actio29;
    QAction *actio30;
};

#endif // QTOUCHTRAINVIEW_H
