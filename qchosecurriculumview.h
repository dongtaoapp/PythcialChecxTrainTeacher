#ifndef QCHOSECURRICULUMVIEW_H
#define QCHOSECURRICULUMVIEW_H
#define  CurriculumItemHeight 60
#define  CurriculumItemWidth 564
#include <QWidget>
#include <QLabel>
#include <QDialog>
#include <QRadioButton>
#include <QScrollArea>
#include <QMap>
#include <QList>
#include <QString>
#include <QPushButton>
#include <QMouseEvent>
typedef struct CurriculumInfo{

   QString id;
   QString name;
   QString time;

}CurriculumInfo;


class  CurriculumItem :public QWidget
{
    Q_OBJECT
public:
     CurriculumItem (QWidget *parnet=Q_NULLPTR);
     ~CurriculumItem();
     void itemSetInit();//初始化控件位置
     QString CurriculumId(){return m_id;}
     QString Curriculumname(){return m_name;}
     void setCurriculumMsg(QString name,QString time,QString id);
protected:
      void paintEvent(QPaintEvent *event);
private:
      QString m_id;
      QString m_name;
      QLabel *CurriculumName;
      QLabel *CurriculumTime;
};


class QChoseCurriculumView :public QDialog
{
      Q_OBJECT
public:
    QChoseCurriculumView(QWidget *parent=0);
    ~QChoseCurriculumView();
    void windowInit();//控件初始化
    void setPosition();//控件位置设置
    void loadqss();
    int setCurriculumNum(){return CurriculumMsg_list.size();}//返回课程数量


    void addCurriculum(QString &name,QString &time,QString id);//添加课程信息 name 为课程信息 time为课程时间 id为课程ID
private slots:
    void onOkbnt();
signals:
    void CLNum(QString &num);//发出选择的课程id 信号 点击确认时发出


protected:
     void mousePressEvent (QMouseEvent *event);
     void mouseMoveEvent(QMouseEvent * event);
      void paintEvent(QPaintEvent *event);
private:
   int xOffset,yOffset;
    QLabel *top_label;
    QLabel *title_label;
    QPushButton *close_btn;
    QPushButton *ok_btn;
    QWidget *CurriculumWidget;
    QScrollArea *CurriculumScrollArea;
    QList<CurriculumInfo> CurriculumMsg_list;
    QMap<QRadioButton *,CurriculumItem *> item_map;
};

#endif // QCHOSECURRICULUMVIEW_H
