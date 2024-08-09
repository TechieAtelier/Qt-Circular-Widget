#ifndef CIRCULARWIDGET_H
#define CIRCULARWIDGET_H

#include <QWidget>

class CircularWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CircularWidget(QWidget *parent = nullptr);

signals:

    // QWidget interface
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // CIRCULARWIDGET_H
