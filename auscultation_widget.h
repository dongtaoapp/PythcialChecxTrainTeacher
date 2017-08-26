#ifndef AUSCULTATION_WIDGET_H
#define AUSCULTATION_WIDGET_H

#include <QWidget>
//Ã˝’Ô¿‡ΩÁ√Ê
namespace Ui {
class auscultation_widget;
}

class auscultation_widget : public QWidget
{
    Q_OBJECT

public:
    explicit auscultation_widget(QWidget *parent = 0);
    ~auscultation_widget();
protected:
  void paintEvent(QPaintEvent *event);
public slots:
    void on_HS_btn();
    void on_BS_btn();
signals:
     void aut_btn_id(int id);
private:
    Ui::auscultation_widget *ui;
};

#endif // AUSCULTATION_WIDGET_H
