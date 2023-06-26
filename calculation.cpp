#include "calculation.h"

#include <QWidget>
#include <QGridLayout>

Calculation::Calculation()
{
    m_displayUp = new QLineEdit();
    m_displayDown = new QLineEdit();
    m_sign = new QLabel();
}
