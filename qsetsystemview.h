#ifndef QSETSYSTEMVIEW_H
#define QSETSYSTEMVIEW_H

#include <QWidget>
#include <QDialog>
#include <QListWidgetItem>
#include <setitemview.h>
/*****************���������Ͻ�ϵͳ���ý���*********************/
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
    void onSetSystemCloseComputer();//item ����ź�
private:
    Ui::QSetSystemView *ui;
    QListWidgetItem *exitItem;
    QListWidgetItem *setItem;
    QListWidgetItem *togetherItem;
    QListWidgetItem *aboutTtem;
    SetItemView *setView;
};

#endif // QSETSYSTEMVIEW_H
