#include "circle.h"

Circle::Circle( int posX, int posY, int radius ) : x( posX ), y( posY ), r( radius )
{
}

Circle::~Circle()
{

}
int myRound( int var )
{
	return var + 0.5;
}

void draw( QImage *pBackBuffer )
{
	if ( !pBackBuffer )
	{
		return;
	}

	uchar *pubBuffer = pBackBuffer->bits();

	int height = pBackBuffer->height();
	int width  = pBackBuffer->width();

	int posX = ( ( width )  / 2 ) + this->x,
			   posY = ( ( height ) / 2 ) + this->y;

	memset( pubBuffer,
			   WHITE_COLOR,
			   pBackBuffer->byteCount() );

	int bottom = myRound( posY - this->radius );
	if( bottom < 0 )
	{
		bottom = 0;
	}

	int top = myRound( posY + this->radius );
	if( top > height )
	{
		top = height;
	}

	for( int line = bottom; line < top; line++ )
	{
		int left = myRound( posX - sqrt( this->radius*this->radius - ( posY - line )*( posY - line ) ) );
		if( left < 0 )
		{
			left = 0;
		}

		int right = myRound( posX + sqrt( this->radius*this->radius - ( posY - line )*( posY - line ) ) );
		if( right > width )
		{
			right = width;
		}

		for( int offset = left; offset < right; offset++ )
		{
			memset( pubBuffer + ( line * pBackBuffer->bytesPerLine() ) + ( 3 * offset ),
				   BLACK_COLOR,
				   3 * sizeof( uchar ) );
		}
	}
}

void setX( int x ) : value( x )
{
}

void setY( int y ) : value( y )
{
}

void setR( int r ) : value( r )
{
}
