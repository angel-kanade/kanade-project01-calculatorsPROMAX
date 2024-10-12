/********************************************************************************
** Form generated from reading UI file 'calculators.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATORS_H
#define UI_CALCULATORS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculators
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QGridLayout *gridLayout_2;
    QPushButton *btn_signSub;
    QPushButton *btn_signRest;
    QPushButton *btn_signPow;
    QPushButton *btn_opSL;
    QPushButton *btn_num0;
    QPushButton *btn_num7;
    QPushButton *btn_num6;
    QPushButton *btn_turnPoly;
    QPushButton *btn_num3;
    QPushButton *btn_num2;
    QPushButton *btn_signAdd;
    QPushButton *btn_opClean;
    QPushButton *btn_opCal;
    QPushButton *btn_num9;
    QPushButton *btn_num8;
    QPushButton *btn_num1;
    QPushButton *btn_num4;
    QPushButton *btn_signRC;
    QPushButton *btn_signDivide;
    QPushButton *btn_signLC;
    QPushButton *btn_num5;
    QPushButton *btn_signProduce;
    QPushButton *btn_opDel;
    QPushButton *btn_signPow2;

    void setupUi(QWidget *Calculators)
    {
        if (Calculators->objectName().isEmpty())
            Calculators->setObjectName("Calculators");
        Calculators->setEnabled(true);
        Calculators->resize(320, 425);
        Calculators->setMinimumSize(QSize(320, 425));
        Calculators->setSizeIncrement(QSize(320, 425));
        Calculators->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"	border:none;\n"
"\n"
"	\n"
"	background-color: rgb(240,240,240);\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	font:normal 12pt '\345\276\256\350\275\257\351\233\205\351\273\221';\n"
"	background-color: rgb(252,252,252);\n"
"}\n"
"\n"
"QPushButton#btn_opCal\n"
"{\n"
"	\n"
"	\n"
"	background-color: rgb(0, 85, 161);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(221,223,221);\n"
"}\n"
"\n"
"QPushButton#btn_opCal:hover\n"
"{\n"
"	\n"
"	\n"
"	\n"
"	background-color: rgb(25, 101, 169);\n"
"}"));
        verticalLayout = new QVBoxLayout(Calculators);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 2, 0, 0);
        lineEdit = new QLineEdit(Calculators);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        lineEdit->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        lineEdit->setReadOnly(true);

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(Calculators);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setMinimumSize(QSize(0, 70));
        lineEdit_2->setMaximumSize(QSize(16777215, 70));
        lineEdit_2->setSizeIncrement(QSize(0, 0));
        QFont font;
        font.setPointSize(26);
        lineEdit_2->setFont(font);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        lineEdit_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        lineEdit_2->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(2);
        gridLayout_2->setObjectName("gridLayout_2");
        btn_signSub = new QPushButton(Calculators);
        btn_signSub->setObjectName("btn_signSub");
        btn_signSub->setMinimumSize(QSize(75, 50));
        btn_signSub->setMaximumSize(QSize(75, 50));

        gridLayout_2->addWidget(btn_signSub, 3, 3, 1, 1);

        btn_signRest = new QPushButton(Calculators);
        btn_signRest->setObjectName("btn_signRest");
        btn_signRest->setMinimumSize(QSize(75, 50));
        btn_signRest->setMaximumSize(QSize(75, 50));

        gridLayout_2->addWidget(btn_signRest, 1, 2, 1, 1);

        btn_signPow = new QPushButton(Calculators);
        btn_signPow->setObjectName("btn_signPow");
        btn_signPow->setMinimumSize(QSize(75, 50));
        btn_signPow->setMaximumSize(QSize(75, 50));

        gridLayout_2->addWidget(btn_signPow, 5, 2, 1, 1);

        btn_opSL = new QPushButton(Calculators);
        btn_opSL->setObjectName("btn_opSL");
        btn_opSL->setMinimumSize(QSize(75, 50));
        btn_opSL->setMaximumSize(QSize(75, 50));

        gridLayout_2->addWidget(btn_opSL, 0, 0, 1, 1);

        btn_num0 = new QPushButton(Calculators);
        btn_num0->setObjectName("btn_num0");
        btn_num0->setMinimumSize(QSize(75, 50));
        btn_num0->setMaximumSize(QSize(75, 50));

        gridLayout_2->addWidget(btn_num0, 5, 1, 1, 1);

        btn_num7 = new QPushButton(Calculators);
        btn_num7->setObjectName("btn_num7");
        btn_num7->setMinimumSize(QSize(75, 50));
        btn_num7->setMaximumSize(QSize(75, 50));

        gridLayout_2->addWidget(btn_num7, 2, 0, 1, 1);

        btn_num6 = new QPushButton(Calculators);
        btn_num6->setObjectName("btn_num6");
        btn_num6->setMinimumSize(QSize(75, 50));
        btn_num6->setMaximumSize(QSize(75, 50));

        gridLayout_2->addWidget(btn_num6, 3, 2, 1, 1);

        btn_turnPoly = new QPushButton(Calculators);
        btn_turnPoly->setObjectName("btn_turnPoly");
        btn_turnPoly->setMinimumSize(QSize(75, 50));
        btn_turnPoly->setMaximumSize(QSize(75, 50));

        gridLayout_2->addWidget(btn_turnPoly, 5, 0, 1, 1);

        btn_num3 = new QPushButton(Calculators);
        btn_num3->setObjectName("btn_num3");
        btn_num3->setMinimumSize(QSize(75, 50));
        btn_num3->setMaximumSize(QSize(75, 50));

        gridLayout_2->addWidget(btn_num3, 4, 2, 1, 1);

        btn_num2 = new QPushButton(Calculators);
        btn_num2->setObjectName("btn_num2");
        btn_num2->setMinimumSize(QSize(75, 50));
        btn_num2->setMaximumSize(QSize(75, 50));

        gridLayout_2->addWidget(btn_num2, 4, 1, 1, 1);

        btn_signAdd = new QPushButton(Calculators);
        btn_signAdd->setObjectName("btn_signAdd");
        btn_signAdd->setMinimumSize(QSize(75, 50));
        btn_signAdd->setMaximumSize(QSize(75, 50));

        gridLayout_2->addWidget(btn_signAdd, 4, 3, 1, 1);

        btn_opClean = new QPushButton(Calculators);
        btn_opClean->setObjectName("btn_opClean");
        btn_opClean->setMinimumSize(QSize(75, 50));
        btn_opClean->setMaximumSize(QSize(75, 50));

        gridLayout_2->addWidget(btn_opClean, 0, 2, 1, 1);

        btn_opCal = new QPushButton(Calculators);
        btn_opCal->setObjectName("btn_opCal");
        btn_opCal->setMinimumSize(QSize(75, 50));
        btn_opCal->setMaximumSize(QSize(75, 50));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 85, 161, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(255, 255, 255, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        btn_opCal->setPalette(palette);
        btn_opCal->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(btn_opCal, 5, 3, 1, 1);

        btn_num9 = new QPushButton(Calculators);
        btn_num9->setObjectName("btn_num9");
        btn_num9->setMinimumSize(QSize(75, 50));
        btn_num9->setMaximumSize(QSize(75, 50));

        gridLayout_2->addWidget(btn_num9, 2, 2, 1, 1);

        btn_num8 = new QPushButton(Calculators);
        btn_num8->setObjectName("btn_num8");
        btn_num8->setMinimumSize(QSize(75, 50));
        btn_num8->setMaximumSize(QSize(75, 50));

        gridLayout_2->addWidget(btn_num8, 2, 1, 1, 1);

        btn_num1 = new QPushButton(Calculators);
        btn_num1->setObjectName("btn_num1");
        btn_num1->setMinimumSize(QSize(75, 50));
        btn_num1->setMaximumSize(QSize(75, 50));

        gridLayout_2->addWidget(btn_num1, 4, 0, 1, 1);

        btn_num4 = new QPushButton(Calculators);
        btn_num4->setObjectName("btn_num4");
        btn_num4->setMinimumSize(QSize(75, 50));
        btn_num4->setMaximumSize(QSize(75, 50));

        gridLayout_2->addWidget(btn_num4, 3, 0, 1, 1);

        btn_signRC = new QPushButton(Calculators);
        btn_signRC->setObjectName("btn_signRC");
        btn_signRC->setMinimumSize(QSize(75, 50));
        btn_signRC->setMaximumSize(QSize(75, 50));

        gridLayout_2->addWidget(btn_signRC, 1, 1, 1, 1);

        btn_signDivide = new QPushButton(Calculators);
        btn_signDivide->setObjectName("btn_signDivide");
        btn_signDivide->setMinimumSize(QSize(75, 50));
        btn_signDivide->setMaximumSize(QSize(75, 50));

        gridLayout_2->addWidget(btn_signDivide, 1, 3, 1, 1);

        btn_signLC = new QPushButton(Calculators);
        btn_signLC->setObjectName("btn_signLC");
        btn_signLC->setMinimumSize(QSize(75, 50));
        btn_signLC->setMaximumSize(QSize(75, 50));

        gridLayout_2->addWidget(btn_signLC, 1, 0, 1, 1);

        btn_num5 = new QPushButton(Calculators);
        btn_num5->setObjectName("btn_num5");
        btn_num5->setMinimumSize(QSize(75, 50));
        btn_num5->setMaximumSize(QSize(75, 50));

        gridLayout_2->addWidget(btn_num5, 3, 1, 1, 1);

        btn_signProduce = new QPushButton(Calculators);
        btn_signProduce->setObjectName("btn_signProduce");
        btn_signProduce->setMinimumSize(QSize(75, 50));
        btn_signProduce->setMaximumSize(QSize(75, 50));

        gridLayout_2->addWidget(btn_signProduce, 2, 3, 1, 1);

        btn_opDel = new QPushButton(Calculators);
        btn_opDel->setObjectName("btn_opDel");
        btn_opDel->setMinimumSize(QSize(75, 50));
        btn_opDel->setMaximumSize(QSize(75, 50));

        gridLayout_2->addWidget(btn_opDel, 0, 3, 1, 1);

        btn_signPow2 = new QPushButton(Calculators);
        btn_signPow2->setObjectName("btn_signPow2");
        btn_signPow2->setMinimumSize(QSize(75, 50));
        btn_signPow2->setMaximumSize(QSize(75, 50));

        gridLayout_2->addWidget(btn_signPow2, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        lineEdit_2->raise();
        lineEdit->raise();

        retranslateUi(Calculators);

        QMetaObject::connectSlotsByName(Calculators);
    } // setupUi

    void retranslateUi(QWidget *Calculators)
    {
        Calculators->setWindowTitle(QCoreApplication::translate("Calculators", "Calculators", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("Calculators", "0", nullptr));
        btn_signSub->setText(QCoreApplication::translate("Calculators", "-", nullptr));
        btn_signRest->setText(QCoreApplication::translate("Calculators", "%", nullptr));
        btn_signPow->setText(QCoreApplication::translate("Calculators", "^", nullptr));
        btn_opSL->setText(QCoreApplication::translate("Calculators", "K-ON!", nullptr));
        btn_num0->setText(QCoreApplication::translate("Calculators", "0", nullptr));
        btn_num7->setText(QCoreApplication::translate("Calculators", "7", nullptr));
        btn_num6->setText(QCoreApplication::translate("Calculators", "6", nullptr));
        btn_turnPoly->setText(QCoreApplication::translate("Calculators", "PolyCalc", nullptr));
        btn_num3->setText(QCoreApplication::translate("Calculators", "3", nullptr));
        btn_num2->setText(QCoreApplication::translate("Calculators", "2", nullptr));
        btn_signAdd->setText(QCoreApplication::translate("Calculators", "+", nullptr));
        btn_opClean->setText(QCoreApplication::translate("Calculators", "C", nullptr));
        btn_opCal->setText(QCoreApplication::translate("Calculators", "=", nullptr));
        btn_num9->setText(QCoreApplication::translate("Calculators", "9", nullptr));
        btn_num8->setText(QCoreApplication::translate("Calculators", "8", nullptr));
        btn_num1->setText(QCoreApplication::translate("Calculators", "1", nullptr));
        btn_num4->setText(QCoreApplication::translate("Calculators", "4", nullptr));
        btn_signRC->setText(QCoreApplication::translate("Calculators", ")", nullptr));
        btn_signDivide->setText(QCoreApplication::translate("Calculators", "/", nullptr));
        btn_signLC->setText(QCoreApplication::translate("Calculators", "(", nullptr));
        btn_num5->setText(QCoreApplication::translate("Calculators", "5", nullptr));
        btn_signProduce->setText(QCoreApplication::translate("Calculators", "*", nullptr));
        btn_opDel->setText(QCoreApplication::translate("Calculators", "Del", nullptr));
        btn_signPow2->setText(QCoreApplication::translate("Calculators", "^2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculators: public Ui_Calculators {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATORS_H
