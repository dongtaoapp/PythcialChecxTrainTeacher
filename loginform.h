#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QDialog>
#include <QLabel>
#include <QStringList>
#include <QListWidget>
#include <QListWidgetItem>
typedef struct userinfo
{
    QString name;
    QString pwd;
    bool remember;
}userinfo;

class serialPortForm :public QListWidget
{
    Q_OBJECT
public:
    serialPortForm(QWidget *parent=Q_NULLPTR);
    ~serialPortForm();
    void setListWidgetHeight(int num);
private:

};

class setBtnForm :public QDialog
{
    Q_OBJECT
public:
   setBtnForm(QWidget *patent=Q_NULLPTR);
   ~setBtnForm();
   void formInit();
private slots:
   void onPortformItemClicked(QListWidgetItem *item);
protected:
   void paintEvent(QPaintEvent *event);
signals:
   void portName(QString &portname);//发送选择得串口名称
private:
   QLabel *topLabel;
   serialPortForm *portForm;

};

namespace Ui {
class LoginForm;
}

class LoginForm : public QDialog
{
    Q_OBJECT

public:
    explicit LoginForm(QWidget *parent = 0);
    ~LoginForm();
    void show_login_name(QStringList &namelist);

     void windowInit();//窗口初始化
protected:
    virtual void mousePressEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);
    void closeEvent(QCloseEvent *);
signals:
    void m_close();
public slots:
     void slot_on_login_btn_cliced();
     void slot_checkstate(int state);
     void slot_set_btn();
private:

    Ui::LoginForm *ui;
    bool ischeck;
    bool btn_check;
//    QString portname;
    setBtnForm *portWindow;

};

#endif // LOGINFORM_H
