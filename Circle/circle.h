#ifndef CIRCLE_H
#define CIRCLE_H

#include <QObject>
#include <QSlider>
#include <QImage>
#include <qmath.h>

#include "resource.h"

class Circle : public QObject
{
    Q_OBJECT

public:
    explicit Circle(QObject *parent = NULL);
    Circle(double x, double y, double radius);
    void Draw(QImage *pBackBuffer);

public slots:
    void setPositionX(int value);
    void setPositionY(int value);
    void setRadius(int value);

Q_SIGNALS:
    void valueChanged(int value);

private:
    double x;
    double y;
    double radius;
};


#endif // CIRCLE_H
