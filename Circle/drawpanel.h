#ifndef DRAWPANEL_H
#define DRAWPANEL_H

#include <QWidget>
#include <QPainter>
#include <QImage>

#include "circle.h"

class DrawPanel : public QWidget
{
    Q_OBJECT
public:
    explicit DrawPanel( QWidget *parent, Circle *circle );
    void setSizePanel( int width, int height );
    QImage getImage();
    void saveImage(QString filestring);
protected:
    void paintEvent( QPaintEvent *event );
private:
    Circle *m_pCircle;
    QImage *backBuffer;
};

#endif // DRAWPANEL_H
