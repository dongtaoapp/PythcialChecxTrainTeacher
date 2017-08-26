#ifndef QCOMPAREVIEW_H
#define QCOMPAREVIEW_H

#include <QDialog>
#include <QWidget>
#include <QString>
#include <QPalette>
#include <QTimer>
#include <QDebug>
#include <QTimeLine>
namespace Ui {
class QCompareView;
}

class QCompareView : public QDialog
{
    Q_OBJECT

public:
    explicit QCompareView(QWidget *parent = 0);
    ~QCompareView();
    int SoundNum(){return m_soundNum;}
    void startMyTimer1();
public slots:
    void addComopareMsg(QString &name);//添加对比音源
    void onUiCompareBtn();//开始对比信息
    void onUideleteBtnFirst();
    void onUideleteBtnSecond();
    void onUiemityBtn();

    void SLOTClicked();
    void SLOTTimerMove1();
    void SLOTTimerMove2(int val);
signals:
    void CompareBntCilcked();
protected:
    void paintEvent(QPaintEvent *event);

private:
    Ui::QCompareView *ui;
    int m_soundNum;
    QTimer *timer;
    QTimeLine *timeline1;
    QTimeLine *timeline2;
};

#endif // QCOMPAREVIEW_H
