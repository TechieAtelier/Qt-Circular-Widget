#include "circularwidget.h"
#include <QPainter>

CircularWidget::CircularWidget(QWidget *parent)
    : QWidget{parent}
{
    setFixedSize(200,200);
}

void CircularWidget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);

    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setBrush(Qt::blue);
    QPen pen;
    pen.setColor(Qt::white);
    pen.setWidth(2);
    painter.setPen(pen);
    int radius = qMin(width(),height()) / 2;
    painter.drawEllipse(0,0, radius*2, radius*2);
}
