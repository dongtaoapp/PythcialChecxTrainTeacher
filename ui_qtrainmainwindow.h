/********************************************************************************
** Form generated from reading UI file 'qtrainmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRAINMAINWINDOW_H
#define UI_QTRAINMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTrainMainWindow
{
public:
    QLabel *tab_widget_label;
    QPushButton *tab_widget_right_btn;
    QPushButton *tab_widget_left_btn;
    QPushButton *IdentifyauscultationBtn;

    void setupUi(QWidget *QTrainMainWindow)
    {
        if (QTrainMainWindow->objectName().isEmpty())
            QTrainMainWindow->setObjectName(QStringLiteral("QTrainMainWindow"));
        QTrainMainWindow->resize(1366, 768);
        tab_widget_label = new QLabel(QTrainMainWindow);
        tab_widget_label->setObjectName(QStringLiteral("tab_widget_label"));
        tab_widget_label->setGeometry(QRect(137, 709, 232, 31));
        tab_widget_right_btn = new QPushButton(QTrainMainWindow);
        tab_widget_right_btn->setObjectName(QStringLiteral("tab_widget_right_btn"));
        tab_widget_right_btn->setGeometry(QRect(252, 712, 114, 26));
        tab_widget_right_btn->setStyleSheet(QLatin1String("background-color:white;\n"
"color:black;\n"
"border-radius: 10px;\n"
"font-size:14px;\n"
"border-bottom:2px;"));
        tab_widget_left_btn = new QPushButton(QTrainMainWindow);
        tab_widget_left_btn->setObjectName(QStringLiteral("tab_widget_left_btn"));
        tab_widget_left_btn->setGeometry(QRect(138, 712, 114, 26));
        tab_widget_left_btn->setStyleSheet(QLatin1String("background-color:white;\n"
"color:black;\n"
"border-radius: 10px;\n"
"font-size:14px;"));
        IdentifyauscultationBtn = new QPushButton(QTrainMainWindow);
        IdentifyauscultationBtn->setObjectName(QStringLiteral("IdentifyauscultationBtn"));
        IdentifyauscultationBtn->setGeometry(QRect(366, 364, 31, 91));
        IdentifyauscultationBtn->setCursor(QCursor(Qt::PointingHandCursor));
        IdentifyauscultationBtn->setLayoutDirection(Qt::LeftToRight);
        IdentifyauscultationBtn->setStyleSheet(QLatin1String("border-style:solid;\n"
"image:url(:/images/compare_sidepull.png)"));

        retranslateUi(QTrainMainWindow);

        QMetaObject::connectSlotsByName(QTrainMainWindow);
    } // setupUi

    void retranslateUi(QWidget *QTrainMainWindow)
    {
        QTrainMainWindow->setWindowTitle(QApplication::translate("QTrainMainWindow", "QTrainMainWindow", Q_NULLPTR));
        tab_widget_label->setText(QString());
        tab_widget_right_btn->setText(QApplication::translate("QTrainMainWindow", "\350\257\276\347\250\213\350\241\250\350\257\276\347\250\213", Q_NULLPTR));
        tab_widget_left_btn->setText(QApplication::translate("QTrainMainWindow", "\345\205\250\351\203\250\350\257\276\347\250\213", Q_NULLPTR));
        IdentifyauscultationBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QTrainMainWindow: public Ui_QTrainMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRAINMAINWINDOW_H
