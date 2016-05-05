#ifndef DRAWPANEL_H
#define DRAWPANEL_H

#include <QWidget>
#include <QPainter>

#include "sphere.h"

class DrawPanel : public QWidget
{
    Q_OBJECT
public:
    explicit DrawPanel( QWidget *parent = 0, Sphere *sphere = 0 );
protected:
    void paintEvent( QPaintEvent *event );
private:
    Sphere *sphere;
};

#endif // DRAWPANEL_H
