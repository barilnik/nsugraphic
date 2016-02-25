#include "drawpanel.h"

DrawPanel::DrawPanel( QWidget *parent, Circle *circle ) : QWidget( parent )
{
	m_pCircle = circle;
}

DrawPanel::~DrawPanel()
{

}

void paintEvent( QPaintEvent *event )
{
	painter = new QPainter( this );

	QImage backBuffer( width(), height(), QImage::Format_RGB888 );

	uchar* pubBuffer = backBuffer.bits();
	if( !pubBuffer )
	{
		return;
	}
	memset( pubBuffer, 0, backBuffer.byteCount() );

	if( m_pCircle )
	{
		m_pCircle->Draw( &backBuffer );
	}

	painter.drawImage( 0, 0, backBuffer );
}
