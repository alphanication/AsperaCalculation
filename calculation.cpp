#include "calculation.h"

#include <QWidget>
#include <QGridLayout>

// alphanication, aspera calculation

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

    QFont fontDisplayUp = m_displayUp->font();
    fontDisplayUp.setPointSize(fontDisplayUp.pointSize() + 8);
    m_displayUp->setFont(fontDisplayUp);

    QFont fontDisplayDown = m_displayDown->font();
    fontDisplayDown.setPointSize(fontDisplayDown.pointSize() + 8);
    m_displayDown->setFont(fontDisplayDown);

    QGridLayout* mainLayout = new QGridLayout;

    mainLayout->addWidget(m_displayUp, 0, 0, 6, 1);
    mainLayout->addWidget(m_sign, 1, 5, 1, 1);
    mainLayout->addWidget(m_displayDown, 2, 0, 6, 1);

    mainLayout->setSizeConstraint(QLayout::SetFixedSize);
    setLayout(mainLayout);
}
