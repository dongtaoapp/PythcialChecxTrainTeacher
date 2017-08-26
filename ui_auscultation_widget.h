/********************************************************************************
** Form generated from reading UI file 'auscultation_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUSCULTATION_WIDGET_H
#define UI_AUSCULTATION_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_auscultation_widget
{
public:
    QPushButton *HS_bt;
    QPushButton *BS_btn;

    void setupUi(QWidget *auscultation_widget)
    {
        if (auscultation_widget->objectName().isEmpty())
            auscultation_widget->setObjectName(QStringLiteral("auscultation_widget"));
        auscultation_widget->resize(124, 669);
        HS_bt = new QPushButton(auscultation_widget);
        HS_bt->setObjectName(QStringLiteral("HS_bt"));
        HS_bt->setGeometry(QRect(0, 0, 124, 64));
        HS_bt->setStyleSheet(QStringLiteral(""));
        BS_btn = new QPushButton(auscultation_widget);
        BS_btn->setObjectName(QStringLiteral("BS_btn"));
        BS_btn->setGeometry(QRect(0, 65, 124, 64));
        BS_btn->setStyleSheet(QStringLiteral(""));

        retranslateUi(auscultation_widget);

        QMetaObject::connectSlotsByName(auscultation_widget);
    } // setupUi

    void retranslateUi(QWidget *auscultation_widget)
    {
        auscultation_widget->setWindowTitle(QApplication::translate("auscultation_widget", "Form", Q_NULLPTR));
        HS_bt->setText(QApplication::translate("auscultation_widget", "\345\277\203\351\237\263\351\211\264\345\210\253\345\220\254\350\257\212", Q_NULLPTR));
        BS_btn->setText(QApplication::translate("auscultation_widget", "\345\221\274\345\220\270\351\237\263\351\211\264\345\210\253\345\220\254\350\257\212", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class auscultation_widget: public Ui_auscultation_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUSCULTATION_WIDGET_H
