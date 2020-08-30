/********************************************************************************
** Form generated from reading UI file 'HomeGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEGUI_H
#define UI_HOMEGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeGUI
{
public:
    QLabel *server_say;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_filter;
    QListWidget *listWidget_friends;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_message_3;
    QPushButton *send_btn_3;
    QListWidget *mabite;

    void setupUi(QWidget *HomeGUI)
    {
        if (HomeGUI->objectName().isEmpty())
            HomeGUI->setObjectName(QStringLiteral("HomeGUI"));
        HomeGUI->resize(717, 600);
        server_say = new QLabel(HomeGUI);
        server_say->setObjectName(QStringLiteral("server_say"));
        server_say->setGeometry(QRect(310, 30, 81, 61));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        server_say->setFont(font);
        layoutWidget = new QWidget(HomeGUI);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 160, 258, 222));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font2;
        font2.setPointSize(11);
        label_2->setFont(font2);

        horizontalLayout->addWidget(label_2);

        lineEdit_filter = new QLineEdit(layoutWidget);
        lineEdit_filter->setObjectName(QStringLiteral("lineEdit_filter"));

        horizontalLayout->addWidget(lineEdit_filter);


        verticalLayout->addLayout(horizontalLayout);

        listWidget_friends = new QListWidget(layoutWidget);
        listWidget_friends->setObjectName(QStringLiteral("listWidget_friends"));

        verticalLayout->addWidget(listWidget_friends);

        widget = new QWidget(HomeGUI);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(310, 350, 256, 31));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit_message_3 = new QLineEdit(widget);
        lineEdit_message_3->setObjectName(QStringLiteral("lineEdit_message_3"));

        horizontalLayout_3->addWidget(lineEdit_message_3);

        send_btn_3 = new QPushButton(widget);
        send_btn_3->setObjectName(QStringLiteral("send_btn_3"));

        horizontalLayout_3->addWidget(send_btn_3);

        mabite = new QListWidget(HomeGUI);
        mabite->setObjectName(QStringLiteral("mabite"));
        mabite->setGeometry(QRect(312, 162, 256, 192));

        retranslateUi(HomeGUI);

        QMetaObject::connectSlotsByName(HomeGUI);
    } // setupUi

    void retranslateUi(QWidget *HomeGUI)
    {
        HomeGUI->setWindowTitle(QApplication::translate("HomeGUI", "HomeGUI", Q_NULLPTR));
        server_say->setText(QApplication::translate("HomeGUI", "Babel", Q_NULLPTR));
        label->setText(QApplication::translate("HomeGUI", "Friend list", Q_NULLPTR));
        label_2->setText(QApplication::translate("HomeGUI", "filters : ", Q_NULLPTR));
        send_btn_3->setText(QApplication::translate("HomeGUI", "send", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HomeGUI: public Ui_HomeGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEGUI_H
