#ifndef CALCULATION_H
#define CALCULATION_H

#include <QWidget>
#include <QLineEdit>
#include <QLabel>

class Calculation : public QWidget
{
    Q_OBJECT
public:
    Calculation();
private:
    double m_sumInMemory;
    QString m_pendingOperation;

    QLineEdit* m_displayUp;
    QLineEdit* m_displayDown;
    QLabel* m_sign;
};

#endif // CALCULATION_H
