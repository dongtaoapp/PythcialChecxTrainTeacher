/********************************************************************************
** Form generated from reading UI file 'talkbackview.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TALKBACKVIEW_H
#define UI_TALKBACKVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TalkbackView
{
public:
    QPushButton *talkback_btn;
    QPushButton *quit_btn;
    QPushButton *allow_btn;
    QPushButton *stop_btn;
    QPushButton *remove_btn;
    QCheckBox *popup_chex;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QCheckBox *chose_all;
    QLabel *top_label;

    void setupUi(QDialog *TalkbackView)
    {
        if (TalkbackView->objectName().isEmpty())
            TalkbackView->setObjectName(QStringLiteral("TalkbackView"));
        TalkbackView->resize(706, 451);
        TalkbackView->setLayoutDirection(Qt::LeftToRight);
        talkback_btn = new QPushButton(TalkbackView);
        talkback_btn->setObjectName(QStringLiteral("talkback_btn"));
        talkback_btn->setGeometry(QRect(50, 50, 75, 23));
        talkback_btn->setCursor(QCursor(Qt::PointingHandCursor));
        quit_btn = new QPushButton(TalkbackView);
        quit_btn->setObjectName(QStringLiteral("quit_btn"));
        quit_btn->setGeometry(QRect(450, 50, 75, 23));
        quit_btn->setCursor(QCursor(Qt::PointingHandCursor));
        allow_btn = new QPushButton(TalkbackView);
        allow_btn->setObjectName(QStringLiteral("allow_btn"));
        allow_btn->setGeometry(QRect(40, 390, 91, 23));
        allow_btn->setCursor(QCursor(Qt::PointingHandCursor));
        stop_btn = new QPushButton(TalkbackView);
        stop_btn->setObjectName(QStringLiteral("stop_btn"));
        stop_btn->setGeometry(QRect(230, 390, 91, 23));
        stop_btn->setCursor(QCursor(Qt::PointingHandCursor));
        remove_btn = new QPushButton(TalkbackView);
        remove_btn->setObjectName(QStringLiteral("remove_btn"));
        remove_btn->setGeometry(QRect(440, 390, 101, 23));
        remove_btn->setCursor(QCursor(Qt::PointingHandCursor));
        popup_chex = new QCheckBox(TalkbackView);
        popup_chex->setObjectName(QStringLiteral("popup_chex"));
        popup_chex->setGeometry(QRect(420, 350, 171, 16));
        scrollArea = new QScrollArea(TalkbackView);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(50, 90, 620, 250));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 618, 248));
        scrollArea->setWidget(scrollAreaWidgetContents_2);
        chose_all = new QCheckBox(TalkbackView);
        chose_all->setObjectName(QStringLiteral("chose_all"));
        chose_all->setGeometry(QRect(60, 350, 71, 16));
        top_label = new QLabel(TalkbackView);
        top_label->setObjectName(QStringLiteral("top_label"));
        top_label->setGeometry(QRect(10, 5, 681, 30));
        top_label->setStyleSheet(QStringLiteral(""));

        retranslateUi(TalkbackView);

        QMetaObject::connectSlotsByName(TalkbackView);
    } // setupUi

    void retranslateUi(QDialog *TalkbackView)
    {
        TalkbackView->setWindowTitle(QApplication::translate("TalkbackView", "      \345\257\271\350\256\262\346\223\215\344\275\234", Q_NULLPTR));
        talkback_btn->setText(QApplication::translate("TalkbackView", "\345\257\271\350\256\262\346\265\213\350\257\225", Q_NULLPTR));
        quit_btn->setText(QApplication::translate("TalkbackView", "\351\235\231\351\237\263", Q_NULLPTR));
        allow_btn->setText(QApplication::translate("TalkbackView", "\345\205\201\350\256\270\345\217\221\350\250\200", Q_NULLPTR));
        stop_btn->setText(QApplication::translate("TalkbackView", "\347\273\223\346\235\237\345\217\221\350\250\200", Q_NULLPTR));
        remove_btn->setText(QApplication::translate("TalkbackView", "\347\247\273\351\231\244\350\257\267\346\261\202\346\240\207\345\277\227", Q_NULLPTR));
        popup_chex->setText(QApplication::translate("TalkbackView", "\345\255\246\345\221\230\350\257\267\346\261\202\346\227\266\345\257\271\350\256\262\350\207\252\345\212\250\345\274\271\345\207\272", Q_NULLPTR));
        chose_all->setText(QApplication::translate("TalkbackView", "\345\205\250\351\200\211", Q_NULLPTR));
        top_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TalkbackView: public Ui_TalkbackView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TALKBACKVIEW_H
