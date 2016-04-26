#include "drawpanel.h"

DrawPanel::DrawPanel( QWidget *parent, LemniscateOfBernoulli *newLemniscate ) : QWidget( parent )
{
    lemniscate = newLemniscate;
    connect( lemniscate, SIGNAL( repaint() ), this, SLOT( repaint() ) );
}

void DrawPanel::paintEvent( QPaintEvent */*event*/ )
{
    QPainter painter( this );
    QImage backBuffer( width(), height(), QImage::Format_RGB888 );

    uchar* pubBuffer = backBuffer.bits();
    if ( !pubBuffer )
    {
        return;
    }
    memset( pubBuffer, 255, backBuffer.byteCount() );
    //
    if( lemniscate )
    {
        lemniscate->Draw( &backBuffer );
    }
    //
    painter.drawImage( 0,0, backBuffer );
}
