/********************************************************************************
** Form generated from reading UI file 'Settings.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_ip;
    QLineEdit *ip_edit;
    QLabel *label_port;
    QLineEdit *port_edit;
    QLabel *label_title;
    QPushButton *validation;

    void setupUi(QWidget *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(400, 300);
        formLayoutWidget = new QWidget(Settings);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(100, 120, 221, 80));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setVerticalSpacing(24);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_ip = new QLabel(formLayoutWidget);
        label_ip->setObjectName(QStringLiteral("label_ip"));
        QFont font;
        font.setPointSize(12);
        label_ip->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_ip);

        ip_edit = new QLineEdit(formLayoutWidget);
        ip_edit->setObjectName(QStringLiteral("ip_edit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, ip_edit);

        label_port = new QLabel(formLayoutWidget);
        label_port->setObjectName(QStringLiteral("label_port"));
        label_port->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_port);

        port_edit = new QLineEdit(formLayoutWidget);
        port_edit->setObjectName(QStringLiteral("port_edit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, port_edit);

        label_title = new QLabel(Settings);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setGeometry(QRect(152, 40, 91, 31));
        QFont font1;
        font1.setPointSize(16);
        label_title->setFont(font1);
        validation = new QPushButton(Settings);
        validation->setObjectName(QStringLiteral("validation"));
        validation->setGeometry(QRect(160, 220, 75, 23));

        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWidget *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Settings", Q_NULLPTR));
        label_ip->setText(QApplication::translate("Settings", "Enter Ip : ", Q_NULLPTR));
        label_port->setText(QApplication::translate("Settings", "Port : ", Q_NULLPTR));
        label_title->setText(QApplication::translate("Settings", "Settings", Q_NULLPTR));
        validation->setText(QApplication::translate("Settings", "Ok", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
