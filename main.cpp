#include "calculation.h"

#include <QApplication>

int main (int argc, char *argv[]) {
    QApplication a(argc, argv);
    Calculation calc;
    calc.show();
    return a.exec();
}
