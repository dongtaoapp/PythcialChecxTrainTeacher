/********************************************************************************
** Form generated from reading UI file 'qsetsystemview.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSETSYSTEMVIEW_H
#define UI_QSETSYSTEMVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QSetSystemView
{
public:
    QLabel *toplabel;
    QListWidget *listWidget;

    void setupUi(QWidget *QSetSystemView)
    {
        if (QSetSystemView->objectName().isEmpty())
            QSetSystemView->setObjectName(QStringLiteral("QSetSystemView"));
        QSetSystemView->resize(163, 221);
        QSetSystemView->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-radius:2px;\n"
"background-color:white;\n"
""));
        toplabel = new QLabel(QSetSystemView);
        toplabel->setObjectName(QStringLiteral("toplabel"));
        toplabel->setGeometry(QRect(-70, 0, 271, 10));
        toplabel->setStyleSheet(QLatin1String("border-style:none;\n"
"background-color:white;\n"
"background-image:url(:/images/background.png);\n"
""));
        listWidget = new QListWidget(QSetSystemView);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(5, 10, 151, 201));
        listWidget->setStyleSheet(QStringLiteral("border-style:solid;"));

        retranslateUi(QSetSystemView);

        QMetaObject::connectSlotsByName(QSetSystemView);
    } // setupUi

    void retranslateUi(QWidget *QSetSystemView)
    {
        QSetSystemView->setWindowTitle(QApplication::translate("QSetSystemView", "Form", Q_NULLPTR));
        toplabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QSetSystemView: public Ui_QSetSystemView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSETSYSTEMVIEW_H
