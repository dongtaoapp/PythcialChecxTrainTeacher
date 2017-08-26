#include "qtrainmainwindow.h"
#include <QApplication>
#include <QObject>
#include "loginbackgroundform.h"
#include "qchosecurriculumview.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTrainMainWindow w;
    LoginBackgroundForm  t;
    t.show();
    QChoseCurriculumView Ch;
    Ch.addCurriculum(QStringLiteral("小明"),QStringLiteral("fffffffffffffffffff"),"d");
   Ch.addCurriculum(QStringLiteral("小明"),QStringLiteral("fffffffffffffffffff"),"c");
    Ch.addCurriculum(QStringLiteral("小明"),QStringLiteral("fffffffffffffffffff"),"c");
   Ch.addCurriculum(QStringLiteral("小明"),QStringLiteral("fffffffffffffffffff"),"c");

    QObject::connect(&t,SIGNAL(m_close()),&Ch,SLOT(show()));
    QObject::connect(&t,SIGNAL(m_close()),&w,SLOT(ontest()));
    QObject::connect(&Ch,SIGNAL(CLNum(QString &)),&w,SLOT(setCurriculumID(QString&)));
    QObject::connect(&Ch,SIGNAL(CLNum(QString &)),&w,SLOT(show()));
    return a.exec();
}
