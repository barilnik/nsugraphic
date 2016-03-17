#ifndef DRAWPANEL_H
#define DRAWPANEL_H

#include <QWidget>
#include <QPainter>

#include "circle.h"

class DrawPanel : public QWidget
{
    Q_OBJECT
public:
    explicit DrawPanel( QWidget *parent, Circle *circle );
    void setSizePanel( int width, int height );
protected:
    void paintEvent( QPaintEvent *event );

private:
    Circle *m_pCircle;
};

#endif // DRAWPANEL_H
