/********************************************************************************
** Form generated from reading UI file 'loginform.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFORM_H
#define UI_LOGINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginForm
{
public:
    QComboBox *box1;
    QLineEdit *pwdedit;
    QCheckBox *checkBox;
    QPushButton *set_btn;
    QPushButton *log_btn;
    QLabel *label;

    void setupUi(QDialog *LoginForm)
    {
        if (LoginForm->objectName().isEmpty())
            LoginForm->setObjectName(QStringLiteral("LoginForm"));
        LoginForm->resize(764, 339);
        LoginForm->setCursor(QCursor(Qt::ArrowCursor));
        LoginForm->setStyleSheet(QStringLiteral(""));
        box1 = new QComboBox(LoginForm);
        box1->setObjectName(QStringLiteral("box1"));
        box1->setGeometry(QRect(420, 80, 291, 41));
        box1->setStyleSheet(QLatin1String("font-size:18px;\n"
"border-style: solid;\n"
"border-bottom:1px solid #5c5c5c;  \n"
"\n"
"\n"
"  \n"
""));
        pwdedit = new QLineEdit(LoginForm);
        pwdedit->setObjectName(QStringLiteral("pwdedit"));
        pwdedit->setGeometry(QRect(420, 130, 291, 31));
        pwdedit->setStyleSheet(QLatin1String("border-style: solid; \n"
"border-color: red;\n"
"border-bottom:1px solid #5c5c5c;\n"
"font-size:16px;\n"
" "));
        checkBox = new QCheckBox(LoginForm);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(420, 190, 81, 16));
        set_btn = new QPushButton(LoginForm);
        set_btn->setObjectName(QStringLiteral("set_btn"));
        set_btn->setGeometry(QRect(740, 0, 21, 21));
        set_btn->setCursor(QCursor(Qt::PointingHandCursor));
        set_btn->setStyleSheet(QLatin1String("border-style:solid;\n"
"image:url(:/images/set.png)"));
        log_btn = new QPushButton(LoginForm);
        log_btn->setObjectName(QStringLiteral("log_btn"));
        log_btn->setGeometry(QRect(620, 230, 95, 44));
        log_btn->setCursor(QCursor(Qt::PointingHandCursor));
        log_btn->setStyleSheet(QLatin1String("border-style:solid;\n"
"color:white;\n"
"font-size:18\n"
"px;\n"
"background-color:#1f88d4;\n"
""));
        label = new QLabel(LoginForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 358, 339));
        label->setStyleSheet(QStringLiteral("background-image:url(:/images/jyv1.1.png)"));

        retranslateUi(LoginForm);

        QMetaObject::connectSlotsByName(LoginForm);
    } // setupUi

    void retranslateUi(QDialog *LoginForm)
    {
        LoginForm->setWindowTitle(QApplication::translate("LoginForm", "LoginForm", Q_NULLPTR));
        checkBox->setText(QApplication::translate("LoginForm", "\350\256\260\344\275\217\345\257\206\347\240\201", Q_NULLPTR));
        set_btn->setText(QString());
        log_btn->setText(QApplication::translate("LoginForm", "\347\231\273 \351\231\206", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginForm: public Ui_LoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H
