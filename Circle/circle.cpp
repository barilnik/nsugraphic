#include "circle.h"

Circle::Circle( QObject *parent ) : QObject(parent)
{
	this->x = 0;
	this->y = 0;
	this->radius = 5;
}

Circle::Circle( int posX, int posY, int radius ) : x( posX ), y( posY ), radius( radius )
{
}

Circle::~Circle()
{

<<<<<<< HEAD
=======

void Circle::setPositionY( int value )
{
    this->y = value;
    emit valueChanged( value );
>>>>>>> circle
}
int myRound( int var )
{
	return var + 0.5;
}

void Circle::draw( QImage *pBackBuffer )
{
	if ( !pBackBuffer )
	{
		return;
	}

	uchar *pubBuffer = pBackBuffer->bits();

	int height = pBackBuffer->height();
	int width  = pBackBuffer->width();

	int posX = ( width  / 2 ) + this->x;
	int posY = ( height / 2 ) + this->y;

	memset( pubBuffer,
			   255,
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
				   0,
				   3 * sizeof( uchar ) );
		}
	}
}

void Circle::setX( int x ) : value( x )
{
	emit valueChanged( x );
}

void Circle::setY( int y ) : value( y )
{
	emit valueChanged( y );
}

void Circle::setR( int r ) : value( r )
{
	emit valueChanged( r );
}
