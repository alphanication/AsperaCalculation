#include "calculation.h"

#include <QWidget>
#include <QGridLayout>

Calculation::Calculation()
{
    setWindowTitle("AsperaCalculation");

    m_displayUp = new QLineEdit();
    m_displayDown = new QLineEdit();
    m_sign = new QLabel();

    m_displayUp->setReadOnly(true);
    m_displayDown->setReadOnly(true);

    m_displayUp->setAlignment(Qt::AlignRight);
    m_displayDown->setAlignment(Qt::AlignRight);

    m_displayUp->setMaxLength(15);
    m_displayDown->setMaxLength(15);

    QGridLayout* mainLayout = new QGridLayout;

    mainLayout->addWidget(m_displayUp, 0, 0, 6, 1);
    mainLayout->addWidget(m_sign, 1, 5, 1, 1);
    mainLayout->addWidget(m_displayDown, 2, 0, 6, 1);

    setLayout(mainLayout);
}
