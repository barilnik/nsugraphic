#include "vector.h"

Vector::Vector():QPoint()
{

}

Vector::Vector(const int &x, const int &y):QPoint(x, y)
{

}

Vector::~Vector(){

}

bool operator>=(const Vector v, const int &val){
    if(v.x() >= val && v.y() >= val)
        return true;

    return false;
}

bool operator<=(const Vector v, const int &val){
    return !(v > val);
}

bool operator>(const Vector v, const int &val){
    if(v.x() > val || v.y() > val)
        return true;

    return false;
}

bool operator==(const Vector v, const int &val){

    if(v.x() == val && v.y() == val)
        return true;

    return false;
}

const Vector& operator+(const Vector &v1, const Vector &v2){
    return Vector(v1.x() + v2.x(), v1.y() + v2.y());
}

const Vector& operator-(const Vector &v1, const Vector &v2){
    return Vector(v1.x() - v2.x(), v1.y() - v2.y());
}

int operator *(const Vector v1, const Vector v2){
    return v1.x()*v2.y() - v2.x()*v1.y();
}

const Vector Vector::diffTo(const Vector &v) const{
    return Vector(std::abs(x() - v.x()), std::abs(y() - v.y()));
}

const long long Vector::distanceTo(const Vector &v) const{
    return (x() - v.x())*(x() - v.x()) + (y() - v.y())*(y() - v.y());
}

const Vector Vector::scaleTo(const Vector &coeff) const{
    return Vector(x()*coeff.x(), y()*coeff.y());
}

const Vector Vector::varyTo(const int &x, const int &y) const{
    return Vector(this->x() + x, this->y() + y);
}

const int Vector::findImagePoint(const int& bytesPerLine) const{
    return y()*bytesPerLine + x()*3;
}

