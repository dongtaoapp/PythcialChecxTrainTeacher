/********************************************************************************
** Form generated from reading UI file 'qcompareview.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QCOMPAREVIEW_H
#define UI_QCOMPAREVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QCompareView
{
public:
    QPushButton *hide_btn;
    QPushButton *close_btn;
    QPushButton *deleteBtn_first;
    QPushButton *deleteBtn_second;
    QLabel *label_first;
    QLabel *label_second;
    QPushButton *empty_btn;
    QPushButton *compareBtn;
    QLabel *label_3;
    QLabel *title_label;

    void setupUi(QWidget *QCompareView)
    {
        if (QCompareView->objectName().isEmpty())
            QCompareView->setObjectName(QStringLiteral("QCompareView"));
        QCompareView->resize(301, 619);
        QCompareView->setStyleSheet(QLatin1String("QWidget#QCompareView{\n"
"	border-style:solid;\n"
"	background-color:white;\n"
"	border:1px solid #bebebe;\n"
"	\n"
"}\n"
""));
        hide_btn = new QPushButton(QCompareView);
        hide_btn->setObjectName(QStringLiteral("hide_btn"));
        hide_btn->setGeometry(QRect(0, 0, 20, 41));
        hide_btn->setCursor(QCursor(Qt::PointingHandCursor));
        hide_btn->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-bottom:1px solid #bebebe;\n"
"image:url(:/images/compare_hide.png)"));
        close_btn = new QPushButton(QCompareView);
        close_btn->setObjectName(QStringLiteral("close_btn"));
        close_btn->setGeometry(QRect(281, 0, 20, 41));
        close_btn->setCursor(QCursor(Qt::PointingHandCursor));
        close_btn->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-bottom:1px solid #bebebe;\n"
"image:url(:/images/close_button.png)"));
        deleteBtn_first = new QPushButton(QCompareView);
        deleteBtn_first->setObjectName(QStringLiteral("deleteBtn_first"));
        deleteBtn_first->setGeometry(QRect(274, 42, 27, 41));
        deleteBtn_first->setCursor(QCursor(Qt::PointingHandCursor));
        deleteBtn_first->setStyleSheet(QLatin1String("border-style:solid;\n"
"color:#4aabe9;\n"
"font-size:14px;\n"
"border-bottom:1px solid #bebebe;\n"
""));
        deleteBtn_second = new QPushButton(QCompareView);
        deleteBtn_second->setObjectName(QStringLiteral("deleteBtn_second"));
        deleteBtn_second->setGeometry(QRect(274, 84, 27, 41));
        deleteBtn_second->setCursor(QCursor(Qt::PointingHandCursor));
        deleteBtn_second->setStyleSheet(QLatin1String("border-style:solid;\n"
"color:#4aabe9;\n"
"font-size:14px;\n"
"border-bottom:1px solid #bebebe;"));
        label_first = new QLabel(QCompareView);
        label_first->setObjectName(QStringLiteral("label_first"));
        label_first->setGeometry(QRect(0, 42, 274, 41));
        label_first->setStyleSheet(QLatin1String("QLabel#label_first{\n"
"	font-size:14px;\n"
"	color:#4aabe9;\n"
"	font-weight:900;\n"
"    border-style:solid;\n"
"	border-bottom:1px solid #bebebe;\n"
"}"));
        label_second = new QLabel(QCompareView);
        label_second->setObjectName(QStringLiteral("label_second"));
        label_second->setGeometry(QRect(0, 84, 274, 41));
        label_second->setStyleSheet(QLatin1String("QLabel#label_second{\n"
"	font-size:14px;\n"
"	color:#4aabe9;\n"
"	font-weight:900;\n"
"    border-style:solid;\n"
"	border-bottom:1px solid #bebebe;\n"
"}"));
        empty_btn = new QPushButton(QCompareView);
        empty_btn->setObjectName(QStringLiteral("empty_btn"));
        empty_btn->setGeometry(QRect(220, 170, 75, 31));
        empty_btn->setCursor(QCursor(Qt::PointingHandCursor));
        empty_btn->setStyleSheet(QLatin1String("border-style:solid;\n"
"background-color:white;\n"
"color:#4aabe9;\n"
"font-size:14px;"));
        compareBtn = new QPushButton(QCompareView);
        compareBtn->setObjectName(QStringLiteral("compareBtn"));
        compareBtn->setGeometry(QRect(0, 170, 132, 34));
        compareBtn->setCursor(QCursor(Qt::PointingHandCursor));
        compareBtn->setStyleSheet(QLatin1String("border-style:solid;\n"
"font-size:14px;\n"
"background-color:#4aabe9;\n"
"color:white;"));
        label_3 = new QLabel(QCompareView);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 180, 51, 16));
        title_label = new QLabel(QCompareView);
        title_label->setObjectName(QStringLiteral("title_label"));
        title_label->setGeometry(QRect(10, 0, 281, 41));
        title_label->setStyleSheet(QLatin1String("QLabel#title_label{\n"
"	font-size:16px;\n"
"	color:black;\n"
"	font-weight:900;\n"
"    border-style:solid;\n"
"	border-bottom:1px solid #bebebe;\n"
"}"));

        retranslateUi(QCompareView);

        QMetaObject::connectSlotsByName(QCompareView);
    } // setupUi

    void retranslateUi(QWidget *QCompareView)
    {
        QCompareView->setWindowTitle(QApplication::translate("QCompareView", "Form", Q_NULLPTR));
        hide_btn->setText(QString());
        close_btn->setText(QString());
        deleteBtn_first->setText(QApplication::translate("QCompareView", "\345\210\240\351\231\244", Q_NULLPTR));
        deleteBtn_second->setText(QApplication::translate("QCompareView", "\345\210\240\351\231\244", Q_NULLPTR));
        label_first->setText(QApplication::translate("QCompareView", "   label_first", Q_NULLPTR));
        label_second->setText(QApplication::translate("QCompareView", "    label_seconf", Q_NULLPTR));
        empty_btn->setText(QApplication::translate("QCompareView", "\346\270\205\347\251\272", Q_NULLPTR));
        compareBtn->setText(QApplication::translate("QCompareView", "\347\241\256\350\256\244\345\257\271\346\257\224", Q_NULLPTR));
        label_3->setText(QApplication::translate("QCompareView", "\346\234\200\345\244\232\344\270\244\344\270\252", Q_NULLPTR));
        title_label->setText(QApplication::translate("QCompareView", "                    title", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QCompareView: public Ui_QCompareView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QCOMPAREVIEW_H
