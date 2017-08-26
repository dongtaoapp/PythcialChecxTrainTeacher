/********************************************************************************
** Form generated from reading UI file 'courseware_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSEWARE_WIDGET_H
#define UI_COURSEWARE_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_courseware_widget
{
public:
    QPushButton *HT_btn;
    QPushButton *abdomen_L_btn;
    QPushButton *abdomen_T_btn;
    QPushButton *ECG_btn;
    QLabel *title_label;

    void setupUi(QWidget *courseware_widget)
    {
        if (courseware_widget->objectName().isEmpty())
            courseware_widget->setObjectName(QStringLiteral("courseware_widget"));
        courseware_widget->resize(124, 669);
        HT_btn = new QPushButton(courseware_widget);
        HT_btn->setObjectName(QStringLiteral("HT_btn"));
        HT_btn->setGeometry(QRect(0, 0, 124, 64));
        abdomen_L_btn = new QPushButton(courseware_widget);
        abdomen_L_btn->setObjectName(QStringLiteral("abdomen_L_btn"));
        abdomen_L_btn->setGeometry(QRect(0, 65, 124, 64));
        abdomen_T_btn = new QPushButton(courseware_widget);
        abdomen_T_btn->setObjectName(QStringLiteral("abdomen_T_btn"));
        abdomen_T_btn->setGeometry(QRect(0, 130, 124, 64));
        ECG_btn = new QPushButton(courseware_widget);
        ECG_btn->setObjectName(QStringLiteral("ECG_btn"));
        ECG_btn->setGeometry(QRect(0, 195, 124, 64));
        title_label = new QLabel(courseware_widget);
        title_label->setObjectName(QStringLiteral("title_label"));
        title_label->setGeometry(QRect(0, 620, 124, 20));

        retranslateUi(courseware_widget);

        QMetaObject::connectSlotsByName(courseware_widget);
    } // setupUi

    void retranslateUi(QWidget *courseware_widget)
    {
        courseware_widget->setWindowTitle(QApplication::translate("courseware_widget", "courseware_widget", Q_NULLPTR));
        HT_btn->setText(QApplication::translate("courseware_widget", "\345\277\203\350\204\217\345\220\254\350\257\212\346\225\231\345\255\246", Q_NULLPTR));
        abdomen_L_btn->setText(QApplication::translate("courseware_widget", "\350\205\271\351\203\250\345\220\254\350\257\212\346\225\231\345\255\246", Q_NULLPTR));
        abdomen_T_btn->setText(QApplication::translate("courseware_widget", "\350\205\271\351\203\250\350\247\246\350\257\212\346\225\231\345\255\246", Q_NULLPTR));
        ECG_btn->setText(QApplication::translate("courseware_widget", "\345\277\203\347\224\265\345\233\276\346\225\231\345\255\246", Q_NULLPTR));
        title_label->setText(QApplication::translate("courseware_widget", "         \350\257\276\344\273\266", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class courseware_widget: public Ui_courseware_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSEWARE_WIDGET_H
