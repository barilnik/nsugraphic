#include "drawpanel.h"

DrawPanel::DrawPanel() : QWidget(parent)
{
    QPainter *painter(this);
    painter->setPen(Qt::blue);
    painter->setFont(QFont("Arial", 30));
    painter.drawText(rect(), Qt::AlignCenter, "Qt");

    QGridLayout *drawpanelLayout = new QGridLayout(this);
    drawpanelLayout->addWidget(painter);
}
