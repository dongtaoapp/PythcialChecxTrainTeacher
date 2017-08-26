#ifndef LOGINBACKGROUNDFORM_H
#define LOGINBACKGROUNDFORM_H

#include <QWidget>
#include <loginform.h>
#include <QLabel>
#include <QPushButton>
class LoginBackgroundForm : public  QWidget
{
    Q_OBJECT
public:

    LoginBackgroundForm(QWidget *parent=Q_NULLPTR);
    ~LoginBackgroundForm();
    void windowInit();
    void loadqss();
protected:
     void paintEvent(QPaintEvent *event);
     void closeEvent(QCloseEvent *event);
signals:
     void m_close();
private:
    LoginForm *loginform;
    QLabel *backgroundLabel;
    QLabel *m_title_label;
    QPushButton *m_close_btn;
};

#endif // LOGINBACKGROUNDFORM_H
