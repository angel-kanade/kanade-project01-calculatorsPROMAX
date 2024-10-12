#ifndef POLYCALC_H
#define POLYCALC_H

#include <QWidget>
#include "ui_calculators.h"
#pragma once


namespace Ui {
class PolyCalc;
}

class PolyCalc : public QWidget
{
    Q_OBJECT

public:
    explicit PolyCalc(QWidget *parent = nullptr);
    ~PolyCalc();

    void initUI();

public slots:
    void onButtonGroupClicked(QAbstractButton* btn);

signals:
    void back(); //定义一个信号

private:
    Ui::PolyCalc *ui;
};

#endif // POLYCALC_H
