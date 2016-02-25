#include "point.h"

Point::Point( int x, int y )
{
	this->x = x;
	this->y = y;
}

Point::~Point()
{

}

void setX( int value )
{
	this->x = value;
}

void setY( int value )
{
	this->y = value;
}
