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
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeGUI
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_filter;
    QListWidget *listWidget_friends;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *conversation_name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *id_to_call;
    QPushButton *call_btn;
    QListView *listView_message;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_message;
    QPushButton *send_btn;
    QPushButton *logout_btn;
    QLabel *label_statusCall;

    void setupUi(QWidget *HomeGUI)
    {
        if (HomeGUI->objectName().isEmpty())
            HomeGUI->setObjectName(QStringLiteral("HomeGUI"));
        HomeGUI->resize(717, 600);
        layoutWidget = new QWidget(HomeGUI);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 80, 301, 511));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setPointSize(11);
        label_2->setFont(font1);

        horizontalLayout->addWidget(label_2);

        lineEdit_filter = new QLineEdit(layoutWidget);
        lineEdit_filter->setObjectName(QStringLiteral("lineEdit_filter"));

        horizontalLayout->addWidget(lineEdit_filter);


        verticalLayout->addLayout(horizontalLayout);

        listWidget_friends = new QListWidget(layoutWidget);
        listWidget_friends->setObjectName(QStringLiteral("listWidget_friends"));

        verticalLayout->addWidget(listWidget_friends);

        layoutWidget1 = new QWidget(HomeGUI);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(300, 80, 411, 511));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        conversation_name = new QLabel(layoutWidget1);
        conversation_name->setObjectName(QStringLiteral("conversation_name"));
        conversation_name->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(conversation_name);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font2;
        font2.setPointSize(10);
        label_3->setFont(font2);

        horizontalLayout_3->addWidget(label_3);

        id_to_call = new QLineEdit(layoutWidget1);
        id_to_call->setObjectName(QStringLiteral("id_to_call"));

        horizontalLayout_3->addWidget(id_to_call);

        call_btn = new QPushButton(layoutWidget1);
        call_btn->setObjectName(QStringLiteral("call_btn"));

        horizontalLayout_3->addWidget(call_btn);


        verticalLayout_2->addLayout(horizontalLayout_3);

        listView_message = new QListView(layoutWidget1);
        listView_message->setObjectName(QStringLiteral("listView_message"));

        verticalLayout_2->addWidget(listView_message);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit_message = new QLineEdit(layoutWidget1);
        lineEdit_message->setObjectName(QStringLiteral("lineEdit_message"));

        horizontalLayout_2->addWidget(lineEdit_message);

        send_btn = new QPushButton(layoutWidget1);
        send_btn->setObjectName(QStringLiteral("send_btn"));

        horizontalLayout_2->addWidget(send_btn);


        verticalLayout_2->addLayout(horizontalLayout_2);

        logout_btn = new QPushButton(HomeGUI);
        logout_btn->setObjectName(QStringLiteral("logout_btn"));
        logout_btn->setGeometry(QRect(670, 10, 31, 31));
        logout_btn->setCursor(QCursor(Qt::PointingHandCursor));
        logout_btn->setStyleSheet(QLatin1String("border-radius: 20px;\n"
"background-image: url(:/LogGUI/power-button-outline.png);"));
        label_statusCall = new QLabel(HomeGUI);
        label_statusCall->setObjectName(QStringLiteral("label_statusCall"));
        label_statusCall->setGeometry(QRect(240, 20, 161, 31));
        label_statusCall->setFont(font2);

        retranslateUi(HomeGUI);
        QObject::connect(lineEdit_filter, SIGNAL(textChanged(QString)), listWidget_friends, SLOT(update()));

        QMetaObject::connectSlotsByName(HomeGUI);
    } // setupUi

    void retranslateUi(QWidget *HomeGUI)
    {
        HomeGUI->setWindowTitle(QApplication::translate("HomeGUI", "HomeGUI", Q_NULLPTR));
        label->setText(QApplication::translate("HomeGUI", "Friend list", Q_NULLPTR));
        label_2->setText(QApplication::translate("HomeGUI", "filters : ", Q_NULLPTR));
        conversation_name->setText(QString());
        label_3->setText(QApplication::translate("HomeGUI", "Id to call", Q_NULLPTR));
        call_btn->setText(QApplication::translate("HomeGUI", "call", Q_NULLPTR));
        send_btn->setText(QApplication::translate("HomeGUI", "send", Q_NULLPTR));
        logout_btn->setText(QString());
        label_statusCall->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HomeGUI: public Ui_HomeGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEGUI_H
