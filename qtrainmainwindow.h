#ifndef QTRAINMAINWINDOW_H
#define QTRAINMAINWINDOW_H

#include <QWidget>
#include <QMouseEvent>
#include "main_tab.h"
#include "talkbackview.h"
#include "qcompareview.h"
#include "qchosecurriculumview.h"
#include "qtouchtrainview.h"
#include "qsetsystemview.h"
#include "qmanager.h"
#include <QLabel>
#include <QPushButton>
#include <QAxWidget>
#include <QStackedWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>

#include <QPropertyAnimation>
#include <QMenu>
class m_searchLineEdit :public QWidget
{
    Q_OBJECT
public:
    m_searchLineEdit (QWidget *parent=Q_NULLPTR);
    ~m_searchLineEdit();
private slots:
    void    onSearch();
signals:
    void search(QString &searchMsg);
private:
   QPushButton *pSearchButton ;
   QLineEdit *m_pSearchLineEdit;
   QHBoxLayout *pSearchLayout;
};


namespace Ui {
class QTrainMainWindow;
}

class QTrainMainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit QTrainMainWindow(QWidget *parent = 0);
    ~QTrainMainWindow();
    void windowInit();
    void loadqss();
protected:
    void mousePressEvent (QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent * event);
     void paintEvent(QPaintEvent *event);
public slots:
      void onTabchange(int index);
      void flashAction (QString cmd,QString data);
      void loadflash(QString &flashpath);//加载flash
      void setPathshow(QString &path);
      void onPlaybtn();
      void ontalkbtn();
      void onTabBtnClicked(int index);//tab控件点击事件
      void setCurriculumID(QString &id);

   //   void setClientState(int deskID,int State);
    //  void onSysCilecked(int index);//系统设置控件点击事件

      void onIdentifyauscultationBtn();

      void onSysBtn();


//    void onTeachbtn();
//    void onListenbtn();
 //    void onspeakbtn();
//    void onBordbtn();

      void ontest();
signals:

private:
    Ui::QTrainMainWindow *ui;
    QLabel *top_label;
    QLabel *m_title_label;
    QLabel *m_log_label;
    QLabel *play_label;
    QLabel *listen_label;
    QLabel *speak_label;
    QLabel *talk_label;
    QLabel *teach_label;
    QLabel *bord_label;
    QLabel *search_label;
    QLabel *local_label;
    QLabel *path_label;
    QLabel *bottom_label;
    QLabel *touchTrainLabel;
    QLabel *image_label;


    QPushButton *m_close_btn;
    QPushButton *m_min_btn;
    QPushButton *sysTemBtn;
    QPushButton *sheduleBtn;
    QPushButton *play_btn;
    QPushButton *listen_btn;
    QPushButton *speak_btn;
    QPushButton *talk_btn;
    QPushButton *teach_btn;
    QPushButton *bord_btn;
    QPushButton *touchTrainBtn;

    main_tab *m_tab;
    TalkbackView *talkwindow;
    m_searchLineEdit *test;
    QAxWidget *flash_widget;
    QStackedWidget *stacked_tree;
    QCompareView *compareview;
    QChoseCurriculumView *sheduleView;
    QTouchTrainView *touchTrain;
    QSetSystemView *systemView;


    QString CurriculumID;
    QManager m_manager;
    QString m_flashpath;
    bool m_play;
    bool sys;
    int xOffset,yOffset;
};

#endif // QTRAINMAINWINDOW_H
