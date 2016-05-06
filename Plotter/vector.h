#ifndef VECTOR_H
#define VECTOR_H

#include <QObject>
#include <QPoint>

class Vector : public QPoint
{
public:
    Vector(const int &x,const int &y);
    Vector();
    ~Vector();

//    bool operator >=(const int &val) const;
//    bool operator ==(const int &val);
    const Vector diffTo(const Vector &v) const;
    const long long distanceTo(const Vector &v) const;
    const Vector scaleTo(const Vector &coeff) const;
    const Vector varyTo(const int &x, const int &y) const;
    const int findImagePoint(const int& bytesPerLine) const;

    friend int operator *(const Vector v1, const Vector v2);
    friend bool operator ==(const Vector v, const int &val);
    friend bool operator >=(const Vector v, const int &val);
    friend bool operator >(const Vector v, const int &val);
    friend bool operator <=(const Vector v, const int &val);
    friend const Vector& operator+(const Vector &v1, const Vector &v2);
    friend const Vector& operator-(const Vector &v1, const Vector &v2);
};

#endif // VECTOR_H
