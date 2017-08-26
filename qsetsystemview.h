#ifndef QSETSYSTEMVIEW_H
#define QSETSYSTEMVIEW_H

#include <QWidget>
#include <QDialog>
#include <QListWidgetItem>
#include <setitemview.h>
/*****************主界面右上角系统设置界面*********************/
namespace Ui {
class QSetSystemView;
}

class QSetSystemView : public QDialog
{
    Q_OBJECT

public:
    explicit QSetSystemView(QWidget *parent = 0);
    ~QSetSystemView();
    void ViewInit();
protected:
   void paintEvent(QPaintEvent *event);
public slots:
    void onMYItemclicked(QListWidgetItem *item);
signals:
    void onSetSystemCloseComputer();//item 点击信号
private:
    Ui::QSetSystemView *ui;
    QListWidgetItem *exitItem;
    QListWidgetItem *setItem;
    QListWidgetItem *togetherItem;
    QListWidgetItem *aboutTtem;
    SetItemView *setView;
};

#endif // QSETSYSTEMVIEW_H
