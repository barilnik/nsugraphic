#ifndef CIRCLE_H
#define CIRCLE_H

#include <QImage>
#include <QObject>

class Circle : public QObject
{
	Q_OBJECT
public:
	explicit Circle( QObject *parent = NULL );
	Circle( int posX, int posY, int radius );
	~Circle();
	void draw( QImage *pBackBuffer );
private:
	int x;
	int y;
	int radius;
public slots:
	void setX( int value );
	void setY( int value );
	void setR( int value );
signals:
	void valueChanged( int value );
};

#endif // CIRCLE_H
