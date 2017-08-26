#ifndef CASE_WIDGET_H
#define CASE_WIDGET_H
#include <QPushButton>
#include <QWidget>
#define TOPBUTTON_OPEN "border-style:none;border-image:url(:/images/open.png)"
#define TOPBUTTON_CLOSE "border-style:none;border-image:url(:/images/close.png)"



//≤°¿˝¿‡ΩÁ√Ê
namespace Ui {
class case_widget;
}

class case_widget : public QWidget
{
    Q_OBJECT

public:
    explicit case_widget(QWidget *parent = 0);
    ~case_widget();
protected:
  void paintEvent(QPaintEvent *event);
signals:

     void hs_btn_show(bool );
     void abs_btn_show(bool );
     void bbgs_btn_show(bool );


     void case_btn_id(int id);

public slots:
    void onhsclicked(bool clicked);
    void onabsclicked(bool clicked);
    void onbbgsclicked(bool clicked);



    void hs_hide();
    void hs_show();
    void abs_hide();
    void abs_show();
    void bbgs_hide();
    void bbgs_show();



    void hs_btns_place();
    void abs_btns_place();
    void bbgs_btn_place();



    void on_hs_all();
    void on_hs_adult();
    void on_hs_child();
    void on_hs_old();

    void on_abs_all();
    void on_abs_adult();
    void on_abs_child();
    void on_abs_old();

    void on_bbgs_all();
    void on_bbgs_adult();
    void on_bbgs_child();
    void on_bbgs_old();


private:

    Ui::case_widget *ui;

    bool hs;
    bool abs;
    bool bbgs;
    QPushButton *hs_all;
    QPushButton *hs_adult;
    QPushButton *hs_child;
    QPushButton *hs_old;

    QPushButton *abs_all;
    QPushButton *abs_adult;
    QPushButton *abs_child;
    QPushButton *abs_old;

    QPushButton *bbgs_all;
    QPushButton *bbgs_adult;
    QPushButton *bbgs_child;
    QPushButton *bbgs_old;
};

#endif // CASE_WIDGET_H
