#include "polycalc.h"
#include "ui_polycalc.h"
#include "MyClass.hpp"
#include <QPushButton>
#include <QButtonGroup>

PolyCalc::PolyCalc(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PolyCalc)
{
    ui->setupUi(this);
    initUI();
}

PolyCalc::~PolyCalc()
{
    delete ui;
}

void PolyCalc::initUI(){

    //找到所有按钮，并把所有的按钮放到一个组里边
    auto buttonGroup = new QButtonGroup(this);
    auto btnList = findChildren<QPushButton*>();
    for (auto btn : btnList){
        buttonGroup->addButton(btn);
    }

    //关联按钮组的点击信号
    connect(buttonGroup,&QButtonGroup::buttonClicked,this,&PolyCalc::onButtonGroupClicked);
}

//判断该字符串是否是数
bool AllisNum(string str){
    bool doc = true;
    for (int i = 0; i < str.size(); i++){
        if (str[i] == '-' && i == 0) continue;
        if (str[i] == '.'){
            if (doc){
                doc = false;
                continue;
            }
            else return false;
        }
        int tmp = (int)str[i];
        if (tmp >= 48 && tmp <= 57){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}

void PolyCalc::onButtonGroupClicked(QAbstractButton* btn){
    QString curr = btn->text();
    if (curr != "ExprCalc") ui->lineEdit_6->clear();

    //如果接收到该按键 返回表达式计算器
    if (curr == "ExprCalc"){
        emit this->back();
    }

    // ui->lineEdit_6->clear();

    //接收到这些二元运算 读取两个变量并计算
    else if(curr == "+"){
        ui->lineEdit_6->clear();
        Polynomial a;
        Polynomial b;
        QString var1 = ui->lineEdit_2->text();
        QString var2 = ui->lineEdit_4->text();
        string toA = var1.toStdString();
        string toB = var2.toStdString();
        if (toA == "" || toB == ""){
            ui->lineEdit_6->insert(QString("Error:存在空变量")); //简单判断是否有效 下同
        }
        else{
            a.stringToPoly(toA);
            b.stringToPoly(toB);
            Polynomial ret = a + b;
            ui->lineEdit_6->insert(QString::fromStdString(ret.polyToString()));
        }
    }
    else if(curr == "-"){
        ui->lineEdit_6->clear();
        Polynomial a;
        Polynomial b;
        QString var1 = ui->lineEdit_2->text();
        QString var2 = ui->lineEdit_4->text();
        string toA = var1.toStdString();
        string toB = var2.toStdString();
        if (toA == "" || toB == ""){
            ui->lineEdit_6->insert(QString("Error:存在空变量"));
        }
        else{
            a.stringToPoly(toA);
            b.stringToPoly(toB);
            Polynomial ret = a - b;
            ui->lineEdit_6->insert(QString::fromStdString(ret.polyToString()));
        }
    }
    else if(curr == "*"){
        ui->lineEdit_6->clear();
        Polynomial a;
        Polynomial b;
        QString var1 = ui->lineEdit_2->text();
        QString var2 = ui->lineEdit_4->text();
        string toA = var1.toStdString();
        string toB = var2.toStdString();
        Polynomial ret;
        if (toA == "" || toB == ""){
            ui->lineEdit_6->insert(QString("Error:存在空变量"));
        }
        else{
            a.stringToPoly(toA);
            if (AllisNum(toB)){
                double k = stod(toB);
                ret = a * k;
            }
            else{
                b.stringToPoly(toB);
                ret = a * b;
            }
            ui->lineEdit_6->insert(QString::fromStdString(ret.polyToString()));
        }
    }
    else if (curr == "求值"){
        Polynomial a;
        double b;
        QString var1 = ui->lineEdit_2->text();
        QString var2 = ui->lineEdit_4->text();
        string toA = var1.toStdString();
        string toB = var2.toStdString();
        if (toA == "" || toB == ""){
            ui->lineEdit_6->insert(QString("Error:存在空变量"));
        }
        else{
            b = stod(toB);
            a.stringToPoly(toA);
            try{
                double ret = a.calculate(b);
                ui->lineEdit_6->insert(QString::fromStdString(to_string(ret)));
            }
            catch(exception& e){
                ui->lineEdit_6->insert(QString::fromStdString(e.what()));
            }
        }
    }

    //接收到这些按钮 为单目运算
    else if (curr == "对变量1求导"){
        Polynomial a;
        QString var = ui->lineEdit_2->text();
        string toA = var.toStdString();
        if (toA == ""){
            ui->lineEdit_6->insert(QString("Error:存在空变量"));
        }
        else{
            a.stringToPoly(toA);
            Polynomial ret = a.derivative();
            ui->lineEdit_6->insert(QString::fromStdString(ret.polyToString()));
        }
    }
    else if (curr == "对变量2求导"){
        Polynomial a;
        QString var = ui->lineEdit_4->text();
        string toA = var.toStdString();
        if (toA == ""){
            ui->lineEdit_6->insert(QString("Error:存在空变量"));
        }
        else{
            a.stringToPoly(toA);
            Polynomial ret = a.derivative();
            ui->lineEdit_6->insert(QString::fromStdString(ret.polyToString()));
        }
    }

    //其他操作
    else if (curr == "清除变量1"){
        ui->lineEdit_2->clear();
    }
    else if (curr == "清除变量2"){
        ui->lineEdit_4->clear();
    }
    else{
        ui->lineEdit_2->clear();
        ui->lineEdit_4->clear();
    }
}
