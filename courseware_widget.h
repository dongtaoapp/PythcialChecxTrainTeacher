#ifndef COURSEWARE_WIDGET_H
#define COURSEWARE_WIDGET_H

#include <QWidget>
//�μ������
namespace Ui {
class courseware_widget;
}

class courseware_widget : public QWidget
{
    Q_OBJECT

public:
    explicit courseware_widget(QWidget *parent = 0);
    ~courseware_widget();
protected:
  void paintEvent(QPaintEvent *event);
public slots:
    void on_HS_cware();//�����������ź�
    void on_ABL_cware();//
     void on_ABT_cware();
     void on_ECG_cware();

signals:
    void cware_btn_id(int id);

private:
    Ui::courseware_widget *ui;
};

#endif // COURSEWARE_WIDGET_H
