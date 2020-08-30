/********************************************************************************
** Form generated from reading UI file 'Register.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QLabel *label_4;
    QCommandLinkButton *commandLinkButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_pseudo;
    QLineEdit *lineEdit_pseudo;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_mdp;
    QLineEdit *lineEdit_mdp;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_retapmdp;
    QLineEdit *lineEdit_retapemdp;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(568, 487);
        label_4 = new QLabel(Register);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(240, 40, 111, 61));
        QFont font;
        font.setPointSize(22);
        label_4->setFont(font);
        commandLinkButton = new QCommandLinkButton(Register);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(240, 360, 111, 41));
        widget = new QWidget(Register);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(170, 140, 251, 191));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_pseudo = new QLabel(widget);
        label_pseudo->setObjectName(QStringLiteral("label_pseudo"));
        label_pseudo->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_pseudo);

        lineEdit_pseudo = new QLineEdit(widget);
        lineEdit_pseudo->setObjectName(QStringLiteral("lineEdit_pseudo"));

        horizontalLayout->addWidget(lineEdit_pseudo);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_mdp = new QLabel(widget);
        label_mdp->setObjectName(QStringLiteral("label_mdp"));
        label_mdp->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_mdp);

        lineEdit_mdp = new QLineEdit(widget);
        lineEdit_mdp->setObjectName(QStringLiteral("lineEdit_mdp"));

        horizontalLayout_2->addWidget(lineEdit_mdp);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_retapmdp = new QLabel(widget);
        label_retapmdp->setObjectName(QStringLiteral("label_retapmdp"));
        label_retapmdp->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_retapmdp);

        lineEdit_retapemdp = new QLineEdit(widget);
        lineEdit_retapemdp->setObjectName(QStringLiteral("lineEdit_retapemdp"));

        horizontalLayout_3->addWidget(lineEdit_retapemdp);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Register", Q_NULLPTR));
        label_4->setText(QApplication::translate("Register", "Register", Q_NULLPTR));
        commandLinkButton->setText(QApplication::translate("Register", "Welcome", Q_NULLPTR));
        label_pseudo->setText(QApplication::translate("Register", "     Pseudo :     ", Q_NULLPTR));
        label_mdp->setText(QApplication::translate("Register", "mot de passe :", Q_NULLPTR));
        label_retapmdp->setText(QApplication::translate("Register", "retape\n"
"  mot de passe:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
