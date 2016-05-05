#include "drawpanel.h"

DrawPanel::DrawPanel( QWidget *parent, Sphere *sphere ) : QWidget( parent ), sphere( sphere )
{

}

void DrawPanel::paintEvent( QPaintEvent */*event*/ )
{
    QPainter painter( this );
    QImage backBuffer( width(), height(), QImage::Format_RGB888 );

    uchar* pubBuffer = backBuffer.bits();
    if( !pubBuffer )
    {
        return;
    }
    memset( pubBuffer, 255, backBuffer.byteCount() );

    //

    painter.drawImage( 0,0, backBuffer );
}
