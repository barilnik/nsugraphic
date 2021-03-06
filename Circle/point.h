#ifndef POINT_H
#define POINT_H

#include <QWidget>
#include <QPoint>
#include <QPainter>

class Point : QWidget
{
	Q_OBJECT
public:
	Point( int x, int y );
	~Point();
private:
	int posX;
	int posY;
public slots:
	void setX( int x = 0);
	void setY( int y = 0 );
};

#endif // POINT_H
