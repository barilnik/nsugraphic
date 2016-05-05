#ifndef PLOTTER_H
#define PLOTTER_H

#include <QObject>
#include <QImage>
#include <math.h>
#include <utility>
#include <vector>
#include <algorithm>
#include <QFile>
#include <QDomDocument>

class Lemniscate : public QObject
{
    Q_OBJECT
public:
    explicit Lemniscate( QObject *parent = 0 );
    ~Lemniscate();
     void draw( QImage* pBackBuffer );
     int getX1() const;
     int getX2() const;
     int getY1() const;
     int getY2() const;
     int round( float x );

signals:
     void repaint();
     void valueChangedX1( int value );
     void valueChangedX2( int value );
     void valueChangedY1( int value );
     void valueChangedY2( int value );
     void valueChangedRadius( int value );

public slots:
     void changeX1( int x );
     void changeX2( int x );
     void changeY1( int y );
     void changeY2( int y );
     void changeRadius( int r );

private:
    void findStart( int* x, int* y );
    long long calculateError( int x, int y );
    void paintOval( QImage* pBackBuffer );
    int positionX1;
    int positionX2;
    int positionY1;
    int positionY2;
    int positionRadius;
};

#endif // PLOTTER_H
