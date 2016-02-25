#ifndef CIRCLE_H
#define CIRCLE_H


class Circle
{
public:
	Circle( int posX, int posY, int radius );
private:
	int x;
	int y;
	int r;
public slots:
	void setX( int value );
	void setY( int value );
	void setR( int value );
};

#endif // CIRCLE_H
