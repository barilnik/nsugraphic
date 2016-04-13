#ifndef BERNOULLILEMNISCATE_H
#define BERNOULLILEMNISCATE_H

#include <QObject>
#include <math.h>
#include <QString>
#include <QMap>
#include "shape.h"
#include "vector.h"

typedef struct Permission{
    bool up;
    bool down;
    bool left;
    bool right;
} Permission;

class BernoulliLemniscate : public QObject, public Shape
{
    Q_OBJECT
public:
    BernoulliLemniscate( int const &x1 = -10, int const &y1 = 0, int const &x2 = 10, int const &y2 = 0, int const &r = 10, QObject *parent = 0 );
    void draw(QImage* image);
private:
    Vector f1;
    Vector f2;
    long long int r;

    Vector* movingF;
    Vector distance;
    Vector center;

    long long calculate(Vector v);
    Vector getNextPoint(Vector curV, Vector prevV);
    Vector getNextPoint(Vector curV, Permission perm);
    void setPixel(const Vector& pixel, QImage* image);
    /*differense is (nextPoint - currentPoint)*/
    void changePermisiion(Vector difference, Permission* perm);
    /*if currentFocus == true, f1 using; if currentFocus == false, f2 using*/
    void drawPart(const Vector& start, bool currentFocus, QImage *image);

    /*if side == true, f1 using; if side == false, f2 using*/
    void drawFocus(bool side, QImage* image);

    /*if side == true, f1 using; if side == false, f2 using*/
    Vector findStart(bool side);
signals:
    void startRepaint();
    void f1Changed(Vector);
    void f2Changed(Vector);
public slots:
    void setX1(int const &);
    void setY1(int const &);
    void setX2(int const &);
    void setY2(int const &);
    void setR(int const &);
    void changeData(QMap<QString, QString>);
};

#endif // BERNOULLILEMNISCATE_H
