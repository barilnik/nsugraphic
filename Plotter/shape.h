#ifndef SHAPE_H
#define SHAPE_H

#include <QImage>

class Shape
{
public:
    virtual void draw(QImage* pBackBuffer) = 0;
};

#endif // SHAPE_H
