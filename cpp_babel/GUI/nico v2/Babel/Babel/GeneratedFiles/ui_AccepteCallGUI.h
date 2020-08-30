/********************************************************************************
** Form generated from reading UI file 'AccepteCallGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCEPTECALLGUI_H
#define UI_ACCEPTECALLGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccepteCallGUI
{
public:
    QPushButton *reject_btn;
    QPushButton *accpt_btn;
    QLabel *label;
    QPushButton *end_call;

    void setupUi(QWidget *AccepteCallGUI)
    {
        if (AccepteCallGUI->objectName().isEmpty())
            AccepteCallGUI->setObjectName(QStringLiteral("AccepteCallGUI"));
        AccepteCallGUI->resize(400, 300);
        reject_btn = new QPushButton(AccepteCallGUI);
        reject_btn->setObjectName(QStringLiteral("reject_btn"));
        reject_btn->setGeometry(QRect(250, 180, 81, 31));
        reject_btn->setCursor(QCursor(Qt::PointingHandCursor));
        reject_btn->setStyleSheet(QLatin1String("    background: #FE0000;\n"
"	border: solid 1px #236036;\n"
"    border-bottom: solid 3px #225f33;\n"
"    box-shadow: inset 0 0 0 1px #90a59c;\n"
"    color: #fff;\n"
"    text-shadow: 0 1px 0 #225f33;\n"
"	border-radius: 8px;"));
        accpt_btn = new QPushButton(AccepteCallGUI);
        accpt_btn->setObjectName(QStringLiteral("accpt_btn"));
        accpt_btn->setGeometry(QRect(80, 180, 81, 31));
        accpt_btn->setCursor(QCursor(Qt::PointingHandCursor));
        accpt_btn->setStyleSheet(QLatin1String("    background: #cae285;\n"
"    border: solid 1px #aad063;\n"
"    border-bottom: solid 3px #799545;\n"
"    box-shadow: inset 0 0 0 1px #e0eeb6;\n"
"    color: #5d7731;\n"
"    text-shadow: 0 1px 0 #d0e5a4;\n"
"	border-radius: 8px;"));
        label = new QLabel(AccepteCallGUI);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 50, 161, 51));
        QFont font;
        font.setPointSize(19);
        label->setFont(font);
        end_call = new QPushButton(AccepteCallGUI);
        end_call->setObjectName(QStringLiteral("end_call"));
        end_call->setGeometry(QRect(160, 150, 91, 41));
        end_call->setStyleSheet(QLatin1String("background-image: url(:/LogGUI/end-call.png);\n"
"background-repeat: no-repeat;\n"
"border-radius: 10px;"));

        retranslateUi(AccepteCallGUI);

        QMetaObject::connectSlotsByName(AccepteCallGUI);
    } // setupUi

    void retranslateUi(QWidget *AccepteCallGUI)
    {
        AccepteCallGUI->setWindowTitle(QApplication::translate("AccepteCallGUI", "AccepteCallGUI", Q_NULLPTR));
        reject_btn->setText(QApplication::translate("AccepteCallGUI", "Reject", Q_NULLPTR));
        accpt_btn->setText(QApplication::translate("AccepteCallGUI", "Accpept", Q_NULLPTR));
        label->setText(QApplication::translate("AccepteCallGUI", "Appel entrant", Q_NULLPTR));
        end_call->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AccepteCallGUI: public Ui_AccepteCallGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCEPTECALLGUI_H
