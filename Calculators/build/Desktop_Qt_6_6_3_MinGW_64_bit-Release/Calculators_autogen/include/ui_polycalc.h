/********************************************************************************
** Form generated from reading UI file 'polycalc.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYCALC_H
#define UI_POLYCALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PolyCalc
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_5;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btn_Expr;
    QPushButton *btn_opC1;
    QPushButton *btn_opC2;
    QPushButton *btn_CA;
    QPushButton *btn_KON;
    QPushButton *btn_opAdd;
    QPushButton *btn_opSub;
    QPushButton *btn_opProduce;
    QPushButton *btn_opCal;
    QPushButton *btn_opDer;

    void setupUi(QWidget *PolyCalc)
    {
        if (PolyCalc->objectName().isEmpty())
            PolyCalc->setObjectName("PolyCalc");
        PolyCalc->resize(425, 250);
        PolyCalc->setMinimumSize(QSize(425, 250));
        PolyCalc->setMaximumSize(QSize(425, 250));
        PolyCalc->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"	border:none;\n"
"\n"
"	\n"
"	background-color: rgb(#eff4f9);\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	font:normal 12pt '\345\276\256\350\275\257\351\233\205\351\273\221';\n"
"	background-color: rgb(252,252,252);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(221,223,221);\n"
"}\n"
""));
        lineEdit = new QLineEdit(PolyCalc);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(1, 8, 114, 19));
        QFont font;
        font.setPointSize(10);
        font.setItalic(true);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        lineEdit->setFrame(true);
        lineEdit->setReadOnly(true);
        lineEdit_2 = new QLineEdit(PolyCalc);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(0, 30, 421, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        lineEdit_2->setFont(font1);
        lineEdit_2->setCursor(QCursor(Qt::IBeamCursor));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        lineEdit_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        lineEdit_4 = new QLineEdit(PolyCalc);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(0, 90, 421, 31));
        lineEdit_4->setFont(font1);
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        lineEdit_4->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        lineEdit_3 = new QLineEdit(PolyCalc);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(1, 68, 114, 19));
        lineEdit_3->setFont(font);
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        lineEdit_3->setReadOnly(true);
        lineEdit_6 = new QLineEdit(PolyCalc);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(0, 150, 421, 31));
        lineEdit_6->setFont(font1);
        lineEdit_6->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        lineEdit_6->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        lineEdit_6->setReadOnly(true);
        lineEdit_5 = new QLineEdit(PolyCalc);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(1, 128, 114, 19));
        lineEdit_5->setFont(font);
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        lineEdit_5->setReadOnly(true);
        layoutWidget = new QWidget(PolyCalc);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 190, 421, 61));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_Expr = new QPushButton(layoutWidget);
        btn_Expr->setObjectName("btn_Expr");

        gridLayout->addWidget(btn_Expr, 0, 0, 1, 1);

        btn_opC1 = new QPushButton(layoutWidget);
        btn_opC1->setObjectName("btn_opC1");

        gridLayout->addWidget(btn_opC1, 0, 1, 1, 1);

        btn_opC2 = new QPushButton(layoutWidget);
        btn_opC2->setObjectName("btn_opC2");

        gridLayout->addWidget(btn_opC2, 0, 2, 1, 1);

        btn_CA = new QPushButton(layoutWidget);
        btn_CA->setObjectName("btn_CA");

        gridLayout->addWidget(btn_CA, 0, 3, 1, 1);

        btn_KON = new QPushButton(layoutWidget);
        btn_KON->setObjectName("btn_KON");

        gridLayout->addWidget(btn_KON, 0, 4, 1, 1);

        btn_opAdd = new QPushButton(layoutWidget);
        btn_opAdd->setObjectName("btn_opAdd");

        gridLayout->addWidget(btn_opAdd, 1, 0, 1, 1);

        btn_opSub = new QPushButton(layoutWidget);
        btn_opSub->setObjectName("btn_opSub");

        gridLayout->addWidget(btn_opSub, 1, 1, 1, 1);

        btn_opProduce = new QPushButton(layoutWidget);
        btn_opProduce->setObjectName("btn_opProduce");

        gridLayout->addWidget(btn_opProduce, 1, 2, 1, 1);

        btn_opCal = new QPushButton(layoutWidget);
        btn_opCal->setObjectName("btn_opCal");

        gridLayout->addWidget(btn_opCal, 1, 3, 1, 1);

        btn_opDer = new QPushButton(layoutWidget);
        btn_opDer->setObjectName("btn_opDer");

        gridLayout->addWidget(btn_opDer, 1, 4, 1, 1);


        retranslateUi(PolyCalc);

        QMetaObject::connectSlotsByName(PolyCalc);
    } // setupUi

    void retranslateUi(QWidget *PolyCalc)
    {
        PolyCalc->setWindowTitle(QCoreApplication::translate("PolyCalc", "Form", nullptr));
        lineEdit->setText(QCoreApplication::translate("PolyCalc", "\345\217\230\351\207\2171:", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("PolyCalc", "\345\217\230\351\207\2172:", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("PolyCalc", "\347\273\223\346\236\234:", nullptr));
        btn_Expr->setText(QCoreApplication::translate("PolyCalc", "ExprCalc", nullptr));
        btn_opC1->setText(QCoreApplication::translate("PolyCalc", "\346\270\205\351\231\244\345\217\230\351\207\2171", nullptr));
        btn_opC2->setText(QCoreApplication::translate("PolyCalc", "\346\270\205\351\231\244\345\217\230\351\207\2172", nullptr));
        btn_CA->setText(QCoreApplication::translate("PolyCalc", "\346\270\205\351\231\244\346\211\200\346\234\211", nullptr));
        btn_KON->setText(QCoreApplication::translate("PolyCalc", "\345\257\271\345\217\230\351\207\2171\346\261\202\345\257\274", nullptr));
        btn_opAdd->setText(QCoreApplication::translate("PolyCalc", "+", nullptr));
        btn_opSub->setText(QCoreApplication::translate("PolyCalc", "-", nullptr));
        btn_opProduce->setText(QCoreApplication::translate("PolyCalc", "*", nullptr));
        btn_opCal->setText(QCoreApplication::translate("PolyCalc", "\346\261\202\345\200\274", nullptr));
        btn_opDer->setText(QCoreApplication::translate("PolyCalc", "\345\257\271\345\217\230\351\207\2172\346\261\202\345\257\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PolyCalc: public Ui_PolyCalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYCALC_H
