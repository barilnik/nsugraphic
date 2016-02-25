#include "drawpanel.h"

DrawPanel::DrawPanel( QWidget *parent, Circle *circle ) : QWidget( parent ), circle( circle )
{
}

DrawPanel::~DrawPanel()
{

}

void DrawPanel::paintEvent( QPaintEvent */*event*/ )
{
	QPainter *painter = new QPainter( this );

	QImage backBuffer( width(), height(), QImage::Format_RGB888 );

	uchar* pubBuffer = backBuffer.bits();
	if( !pubBuffer )
	{
		return;
	}
	memset( pubBuffer, 0, backBuffer.byteCount() );

	if( circle )
	{
		circle->draw( &backBuffer );
	}

	painter->drawImage( 0, 0, backBuffer );
}
