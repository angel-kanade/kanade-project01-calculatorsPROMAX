#include "calculators.h"
#include "polycalc.h"
#include "MyFunctions.hpp"
#include "./ui_calculators.h"
#include <QButtonGroup>
#include <QString>
#include <string>

Calculators::Calculators(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Calculators)
{
    ui->setupUi(this);
    this->ptr = new PolyCalc; //实例化页面二
    initUI();
}

Calculators::~Calculators()
{
    delete ui;
}

void Calculators::initUI(){

    //找到所有按钮，并把所有的按钮放到一个组里边
    auto buttonGroup = new QButtonGroup(this);
    auto btnList = findChildren<QPushButton*>();
    for (auto btn : btnList){
        buttonGroup->addButton(btn);
    }

    //关联按钮组的点击信号
    connect(buttonGroup,&QButtonGroup::buttonClicked,this,&Calculators::onButtonGroupClicked);
}

bool isValid = true;
void Calculators::onButtonGroupClicked(QAbstractButton* btn){
    QString curr = btn->text();
    if (!isValid){
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        isValid = true;
    }
    //根据不同的按钮来处理不同的逻辑
    //如果是数字 直接显示出来
    if (curr >= "0" && curr <= "9" || curr == "(" || curr == "-"){
        if (ui->lineEdit_2->text() == "0") ui->lineEdit_2->clear();
        ui->lineEdit_2->insert(curr);
    }

    //由于实现的是简单的整数计算器 有很多空出来的按钮 这里是个占位符且夹带一点私货
    else if (curr == "K-ON!"){
        return;
    }

    //读取到该按键时 清空所有显示栏
    else if (curr == "C"){
        ui->lineEdit_2->clear();
        ui->lineEdit->clear();
        if (ui->lineEdit_2->text() == "") ui->lineEdit_2->insert("0"); //为空时 显示0
    }

    //DEL一个字符
    else if (curr == "Del"){
        ui->lineEdit_2->setCursorPosition(ui->lineEdit_2->cursorPosition()-1);//获取当前光标位置并使光标前移
        ui->lineEdit_2->del();//删除光标后边所有内容 实现Del操作
        if (ui->lineEdit_2->text() == "") ui->lineEdit_2->insert("0");//为空时 显示0
    }

    //当读取到等号时 调用内置expressionCalculate函数 实现运算
    else if (curr == "="){
        str = ui->lineEdit_2->text().toStdString();
        int ret;

        //用try-catch处理各种异常 使项目更健壮
        try{
            ret = expressionCalculate(str);
            QString toShow = QString::fromStdString(str + "=");
            ui->lineEdit_2->clear();
            ui->lineEdit->clear();
            ui->lineEdit->insert(toShow);
            ui->lineEdit_2->insert(QString::number(ret));
        }
        catch(exception& e){
            isValid = false;
            QString toShow = QString::fromStdString(str + "=");
            ui->lineEdit_2->clear();
            ui->lineEdit->clear();
            ui->lineEdit->insert(toShow);
            ui->lineEdit_2->insert(QString::fromStdString(string(e.what())));
        }
    }

    //设想两个计算器合并 捕捉到该按键后转换为另一个计算器
    else if (curr == "PolyCalc"){
        this->hide();
        this->ptr->show();

        //捕捉ptr指向的界面的信号 接受到信号隐藏ptr界面 回到现有界面
        connect(this->ptr,&PolyCalc::back,[=](){
            this->ptr->hide();
            this->show();
        });

    }

    //处理其余按键
    else{
        ui->lineEdit_2->insert(curr);
    }
}
