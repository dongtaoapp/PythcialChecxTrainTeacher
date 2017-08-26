/********************************************************************************
** Form generated from reading UI file 'case_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASE_WIDGET_H
#define UI_CASE_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_case_widget
{
public:
    QPushButton *hs;
    QPushButton *abs;
    QPushButton *bbgs;
    QLabel *label;

    void setupUi(QWidget *case_widget)
    {
        if (case_widget->objectName().isEmpty())
            case_widget->setObjectName(QStringLiteral("case_widget"));
        case_widget->resize(124, 669);
        hs = new QPushButton(case_widget);
        hs->setObjectName(QStringLiteral("hs"));
        hs->setGeometry(QRect(0, 0, 124, 64));
        abs = new QPushButton(case_widget);
        abs->setObjectName(QStringLiteral("abs"));
        abs->setGeometry(QRect(0, 65, 124, 64));
        bbgs = new QPushButton(case_widget);
        bbgs->setObjectName(QStringLiteral("bbgs"));
        bbgs->setGeometry(QRect(0, 130, 124, 64));
        label = new QLabel(case_widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 620, 124, 20));

        retranslateUi(case_widget);

        QMetaObject::connectSlotsByName(case_widget);
    } // setupUi

    void retranslateUi(QWidget *case_widget)
    {
        case_widget->setWindowTitle(QApplication::translate("case_widget", "Form", Q_NULLPTR));
        hs->setText(QApplication::translate("case_widget", "\345\277\203\351\237\263\345\220\254\350\257\212", Q_NULLPTR));
        abs->setText(QApplication::translate("case_widget", "\350\205\271\351\203\250\345\220\254\350\257\212", Q_NULLPTR));
        bbgs->setText(QApplication::translate("case_widget", "\350\202\240\351\270\243\351\237\263\345\220\254\350\257\212", Q_NULLPTR));
        label->setText(QApplication::translate("case_widget", "   \346\240\207\345\207\206\345\214\226\345\220\254\350\257\212\347\227\205\344\276\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class case_widget: public Ui_case_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASE_WIDGET_H
