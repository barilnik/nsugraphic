#include "drawpanel.h"

DrawPanel::DrawPanel( ImageCreator *painter, QWidget *parent ) : QWidget( parent )
{
    this->painter = painter;
}

DrawPanel::~DrawPanel()
{

}

void DrawPanel::repaint()
{
    this->update();
}

void DrawPanel::paintEvent(QPaintEvent *event)
{
    QPainter panelPainter(this);
    QImage *image = painter->paint(this->width(), this->height());

    if(image)
    {
        panelPainter.drawImage(0, 0, *image);
        delete image;
    }
}
