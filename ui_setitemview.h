/********************************************************************************
** Form generated from reading UI file 'setitemview.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETITEMVIEW_H
#define UI_SETITEMVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetItemView
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QWidget *page_3;
    QGroupBox *groupBox_3;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QWidget *page_4;
    QSpinBox *spinBox;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *web_ip;
    QWidget *page_2;
    QGroupBox *groupBox;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QLabel *la1;
    QLabel *la2;
    QLabel *la3;
    QPushButton *okBtn;
    QPushButton *cancelBtn;

    void setupUi(QDialog *SetItemView)
    {
        if (SetItemView->objectName().isEmpty())
            SetItemView->setObjectName(QStringLiteral("SetItemView"));
        SetItemView->resize(438, 370);
        SetItemView->setStyleSheet(QLatin1String("QGroupBox{\n"
"	border-style:solid;\n"
"	border:1px solid black;\n"
"}\n"
"QPushButton{\n"
"	border-style:solid;\n"
"	border-radius:3px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:red;\n"
"}"));
        stackedWidget = new QStackedWidget(SetItemView);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(127, 0, 311, 291));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        groupBox_2 = new QGroupBox(page);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 50, 281, 231));
        groupBox_2->setStyleSheet(QLatin1String("border-style:solid;\n"
"border:1px solid black"));
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(40, 100, 201, 16));
        radioButton->setStyleSheet(QStringLiteral("border-style:none"));
        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(40, 150, 201, 16));
        radioButton_2->setStyleSheet(QStringLiteral("border-style:none"));
        radioButton_2->setChecked(true);
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        groupBox_3 = new QGroupBox(page_3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 50, 291, 221));
        radioButton_3 = new QRadioButton(groupBox_3);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(20, 70, 241, 16));
        radioButton_3->setChecked(true);
        radioButton_4 = new QRadioButton(groupBox_3);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(20, 140, 231, 16));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        spinBox = new QSpinBox(page_4);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(90, 140, 221, 41));
        spinBox->setStyleSheet(QLatin1String("border-style:solid;\n"
"border:1px solid black;\n"
"font-size:20px;"));
        spinBox->setValue(18);
        label_4 = new QLabel(page_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 140, 71, 41));
        label_4->setStyleSheet(QStringLiteral("font-size:16px;"));
        label = new QLabel(page_4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 250, 81, 21));
        label->setStyleSheet(QStringLiteral("font-size:16px;"));
        web_ip = new QLineEdit(page_4);
        web_ip->setObjectName(QStringLiteral("web_ip"));
        web_ip->setGeometry(QRect(100, 240, 211, 31));
        web_ip->setStyleSheet(QLatin1String("border-style:solid;\n"
"border:1px solid black;\n"
"font-size:18px;"));
        stackedWidget->addWidget(page_4);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        groupBox = new QGroupBox(SetItemView);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 120, 301));
        groupBox->setStyleSheet(QStringLiteral(""));
        btn1 = new QPushButton(groupBox);
        btn1->setObjectName(QStringLiteral("btn1"));
        btn1->setGeometry(QRect(10, 20, 75, 61));
        btn1->setCursor(QCursor(Qt::PointingHandCursor));
        btn2 = new QPushButton(groupBox);
        btn2->setObjectName(QStringLiteral("btn2"));
        btn2->setGeometry(QRect(10, 110, 75, 71));
        btn2->setCursor(QCursor(Qt::PointingHandCursor));
        btn3 = new QPushButton(groupBox);
        btn3->setObjectName(QStringLiteral("btn3"));
        btn3->setGeometry(QRect(10, 210, 75, 61));
        btn3->setCursor(QCursor(Qt::PointingHandCursor));
        la1 = new QLabel(groupBox);
        la1->setObjectName(QStringLiteral("la1"));
        la1->setGeometry(QRect(10, 80, 71, 21));
        la2 = new QLabel(groupBox);
        la2->setObjectName(QStringLiteral("la2"));
        la2->setGeometry(QRect(10, 180, 71, 20));
        la3 = new QLabel(groupBox);
        la3->setObjectName(QStringLiteral("la3"));
        la3->setGeometry(QRect(20, 270, 71, 21));
        okBtn = new QPushButton(SetItemView);
        okBtn->setObjectName(QStringLiteral("okBtn"));
        okBtn->setGeometry(QRect(130, 310, 75, 41));
        okBtn->setCursor(QCursor(Qt::PointingHandCursor));
        cancelBtn = new QPushButton(SetItemView);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(230, 310, 75, 41));
        cancelBtn->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(SetItemView);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(SetItemView);
    } // setupUi

    void retranslateUi(QDialog *SetItemView)
    {
        SetItemView->setWindowTitle(QApplication::translate("SetItemView", "Dialog", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("SetItemView", "\345\277\203\351\237\263\346\250\241\346\213\237\345\220\254\350\257\212\346\250\241\345\274\217\351\200\211\346\213\251", Q_NULLPTR));
        radioButton->setText(QApplication::translate("SetItemView", "\350\202\272\351\203\250\345\214\272\345\237\237\345\220\254\350\257\212\346\227\266 \346\227\240\345\221\274\345\220\270\351\237\263", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("SetItemView", "\350\202\272\351\203\250\345\214\272\345\237\237\345\220\254\350\257\212\346\227\266 \346\234\211\345\221\274\345\220\270\351\237\263", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("SetItemView", "\345\277\203\350\202\272\351\237\263\346\211\251\351\237\263\345\220\254\350\257\212\346\250\241\345\274\217\351\200\211\346\213\251", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("SetItemView", "\345\277\203\350\202\272\351\237\263\347\233\264\346\216\245\346\211\251\351\237\263\345\220\254\350\257\212", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("SetItemView", "\347\224\265\345\255\220\345\220\254\350\257\212\345\231\250\346\216\245\350\247\246\345\274\217\346\211\251\351\237\263\345\220\254\350\257\212", Q_NULLPTR));
        label_4->setText(QApplication::translate("SetItemView", "\345\256\236\351\252\214\345\217\260\346\225\260\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("SetItemView", "\350\256\276\347\275\256WebIP:", Q_NULLPTR));
        groupBox->setTitle(QString());
        btn1->setText(QString());
        btn2->setText(QString());
        btn3->setText(QString());
        la1->setText(QApplication::translate("SetItemView", "\345\277\203\351\237\263\346\250\241\346\213\237\345\220\254\350\257\212", Q_NULLPTR));
        la2->setText(QApplication::translate("SetItemView", "\345\277\203\350\202\272\346\211\251\351\237\263\345\220\254\350\257\212", Q_NULLPTR));
        la3->setText(QApplication::translate("SetItemView", "\347\263\273\347\273\237\350\256\276\347\275\256", Q_NULLPTR));
        okBtn->setText(QApplication::translate("SetItemView", "\347\241\256\350\256\244", Q_NULLPTR));
        cancelBtn->setText(QApplication::translate("SetItemView", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SetItemView: public Ui_SetItemView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETITEMVIEW_H
