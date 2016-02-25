#include "drawpanel.h"

DrawPanel::DrawPanel( QWidget *parent ) : QWidget( parent )
{
	//painter = new Painter( this );
}

DrawPanel::~DrawPanel()
{

}

void paintEvent( QPaintEvent *event )
{
	painter = new Painter( this );
	QImage backBuffer( width(), height(), QImage::Format_RGB888 );

	uchar* pubBuffer = backBuffer.bits();
	if( !pubBuffer )
	{
		return;
	}
	memset( pubBuffer, 0, backBuffer.byteCount() );

	if( m_pRectangle )
	{
		m_pRectangle->Draw( &backBuffer );
	}

	painter.drawImage( 0,0, backBuffer );
}
