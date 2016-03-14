#include "circle.h"

int myRound( double var )
{
    return( int )( var + 0.5 );
}

Circle::Circle( QObject *parent ) : QObject( parent )
{
    this->x = DEFAULT_X;
    this->y = DEFAULT_Y;
    this->radius = DEFAULT_RADIUS;
}

Circle::Circle( double x, double y, double radius )
{
    this->x = x;
    this->y = y;
    this->radius = radius;
}

void Circle::setPositionX( int value )
{
    this->x = value;
    emit valueChanged( value );
}

void Circle::setPositionY( int value )
{
    this->y = value;
    emit valueChanged( value );
}

void Circle::setRadius( int value )
{
    this->radius = value;
    emit valueChanged( value );
}

void Circle::Draw( QImage *pBackBuffer )
{
    if ( !pBackBuffer )
    {
        return;
    }

    uchar *pubBuffer = pBackBuffer->bits();

    int height = pBackBuffer->height();
    int width  = pBackBuffer->width();

    double posX = ( ( ( double )width )  / 2 ) + this->x,
           posY = ( ( ( double )height ) / 2 ) + this->y;

    memset( pubBuffer, WHITE_COLOR, pBackBuffer->byteCount() );

    int bottom = myRound( posY - this->radius );
    if(bottom < 0)
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
        int left = myRound( posX - sqrt( this->radius*this->radius - ( posY - line ) * ( posY - line ) ) );
        if (left < 0)
        {
            left = 0;
        }

        int right = myRound( posX + sqrt( this->radius*this->radius - ( posY - line ) * ( posY - line ) ) );
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

double Circle::getX()
{
    return this->x;
}

double Circle::getY()
{
    return this->y;
}

double Circle::getR()
{
    return this->radius;
}
