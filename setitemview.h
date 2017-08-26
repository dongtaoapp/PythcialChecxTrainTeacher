#ifndef SETITEMVIEW_H
#define SETITEMVIEW_H

#include <QDialog>
#include <QString>
#include <QSettings>
namespace Ui {
class SetItemView;
}

class SetItemView : public QDialog
{
    Q_OBJECT

public:
    explicit SetItemView(QWidget *parent = 0);
    ~SetItemView();
    void Init();
public slots:
    void onBtn1();
    void onBtn2();
    void onBtn3();
    void onOkbtn();
    void oncancelBtn();
signals:
    void changPag(int pag);
private:
    Ui::SetItemView *ui;
    QString Apppath;
    QSettings *configInit;

    int pag1_radiobtn,pag2_radiobtn;

};

#endif // SETITEMVIEW_H
