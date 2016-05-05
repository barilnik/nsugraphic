#ifndef LEMNISCATEOFBERNOULLI_H
#define LEMNISCATEOFBERNOULLI_H

#include <QObject>
#include <QImage>
#include <math.h>
#include <utility>
#include <vector>
#include <algorithm>
#include <QFile>

#include "resource.h"

class LemniscateOfBernoulli : public QObject
{
    Q_OBJECT
public:
    explicit LemniscateOfBernoulli( QObject *parent = 0 );
    int round( float x );
    int getX1() const;
    int getX2() const;
    int getY1() const;
    int getY2() const;
    void Draw( QImage* pBackBuffer );
private:
    int X1;
    int X2;
    int Y1;
    int Y2;
    int radius;
    void findStart( int* x, int* y );
    long long calculateError( int x, int y );
    void paintOval( QImage* pBackBuffer );
signals:
    void repaint();
    void valueChangedX1( int value );
    void valueChangedX2( int value );
    void valueChangedY1( int value );
    void valueChangedY2( int value );
    void valueChangedRadius( int value );
public slots:
    void changedX1( int newX1 );
    void changedX2( int newX2 );
    void changedY1( int newY1 );
    void changedY2( int newY2 );
    void changedR( int newRadius );
};

#endif // LEMNISCATEOFBERNOULLI_H
