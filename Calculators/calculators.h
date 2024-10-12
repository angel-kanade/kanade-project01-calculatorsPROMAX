#ifndef CALCULATORS_H
#define CALCULATORS_H

#include <QWidget>
#include <QAbstractButton>
#include "ui_calculators.h"
#include <QVector>
#include <QString>
#include <string>
#include "polycalc.h"
#include "ui_polycalc.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculators;
}
QT_END_NAMESPACE

class Calculators : public QWidget
{
    Q_OBJECT

public:
    Calculators(QWidget *parent = nullptr);
    ~Calculators();

    PolyCalc* ptr;

    void initUI();
public slots:
    void onButtonGroupClicked(QAbstractButton* btn);

private:
    Ui::Calculators *ui;
    std::string str;
};
#endif // CALCULATORS_H
