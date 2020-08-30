/********************************************************************************
** Form generated from reading UI file 'LogGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGGUI_H
#define UI_LOGGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogGUIClass
{
public:
    QWidget *centralWidget;
    QPushButton *connect_btn;
    QPushButton *settings_btn;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_login;
    QLineEdit *login_edit;
    QLabel *label_psw;
    QLineEdit *psw_edit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LogGUIClass)
    {
        if (LogGUIClass->objectName().isEmpty())
            LogGUIClass->setObjectName(QStringLiteral("LogGUIClass"));
        LogGUIClass->resize(600, 400);
        centralWidget = new QWidget(LogGUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        connect_btn = new QPushButton(centralWidget);
        connect_btn->setObjectName(QStringLiteral("connect_btn"));
        connect_btn->setGeometry(QRect(270, 210, 75, 23));
        settings_btn = new QPushButton(centralWidget);
        settings_btn->setObjectName(QStringLiteral("settings_btn"));
        settings_btn->setGeometry(QRect(490, 20, 75, 23));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(240, 90, 135, 86));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_login = new QLabel(widget);
        label_login->setObjectName(QStringLiteral("label_login"));
        label_login->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_login);

        login_edit = new QLineEdit(widget);
        login_edit->setObjectName(QStringLiteral("login_edit"));

        verticalLayout->addWidget(login_edit);

        label_psw = new QLabel(widget);
        label_psw->setObjectName(QStringLiteral("label_psw"));
        label_psw->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_psw);

        psw_edit = new QLineEdit(widget);
        psw_edit->setObjectName(QStringLiteral("psw_edit"));

        verticalLayout->addWidget(psw_edit);

        LogGUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(LogGUIClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        LogGUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LogGUIClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        LogGUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(LogGUIClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        LogGUIClass->setStatusBar(statusBar);

        retranslateUi(LogGUIClass);

        QMetaObject::connectSlotsByName(LogGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *LogGUIClass)
    {
        LogGUIClass->setWindowTitle(QApplication::translate("LogGUIClass", "LogGUI", Q_NULLPTR));
        connect_btn->setText(QApplication::translate("LogGUIClass", "Connect", Q_NULLPTR));
        settings_btn->setText(QApplication::translate("LogGUIClass", "Settings", Q_NULLPTR));
        label_login->setText(QApplication::translate("LogGUIClass", "Login", Q_NULLPTR));
        label_psw->setText(QApplication::translate("LogGUIClass", "password", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LogGUIClass: public Ui_LogGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGGUI_H
