#include "calculators.h"
#include "MyFunctions.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calculators w;
    w.show();
    return a.exec();
}
