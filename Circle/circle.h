#ifndef CIRCLE_H
#define CIRCLE_H

#include <QImage>
#include <QObject>

class Circle : public QObject
{
	Q_OBJECT
public:
<<<<<<< HEAD
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
=======
    Circle( QObject *parent = NULL );
    Circle( double x, double y, double radius );
    void Draw( QImage *pBackBuffer );

    double getX();
    double getY();
    double getR();

public slots:
    void setPositionX( int value );
    void setPositionY( int value );
    void setRadius( int value );

Q_SIGNALS:
    void valueChanged( int value );

private:
    double x;
    double y;
    double radius;
>>>>>>> circle
};

#endif // CIRCLE_H
