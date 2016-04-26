#include "bernoullilemniscate.h"
/*
#include <limits>

BernoulliLemniscate::BernoulliLemniscate(int const &x1, int const &y1, int const &x2, int const &y2, int const &r, QObject *parent) : QObject(parent), f1(x1, y1), f2(x2, y2)
{
    this->r = r;
    movingF = NULL;
}

void BernoulliLemniscate::setX1(int const &x1){
    f1.rx() = x1;
    emit startRepaint();
}

void BernoulliLemniscate::setY1(int const &y1){
    f1.ry() = y1;
    emit startRepaint();
}

void BernoulliLemniscate::setX2(int const &x2){
    f2.rx() = x2;
    emit startRepaint();
}

void BernoulliLemniscate::setY2(int const &y2){
    f2.ry() = y2;
    emit startRepaint();
}

void BernoulliLemniscate::setR(int const &r){
    this->r = r;
    emit startRepaint();
}

void BernoulliLemniscate::changeData(QMap<QString, QString> map){
    f1 = Vector(map.value(tr("x1")).toInt(), map.value(tr("y1")).toInt());
    f2 = Vector(map.value(tr("x2")).toInt(), map.value(tr("y2")).toInt());

    r = map.value(tr("r")).toInt();
}

long long BernoulliLemniscate::calculate(Vector v){
    int dx1 = v.x() - f1.x(), dx2 = v.x() - f2.x(), dy1 = v.y() - f1.y(), dy2 = v.y() - f2.y();
    return (long long)(dx1*dx1 + dy1*dy1)*(dx2*dx2 + dy2*dy2);
}

void BernoulliLemniscate::setPixel(const Vector& pixel, QImage* image){
    if(pixel.x() < 0 || pixel.y() < 0 || pixel.x() >= image->width() || pixel.y() >= image->height())
        return;

    uchar *buffer = image->bits();

    buffer[pixel.y()*(image->bytesPerLine()) + pixel.x()*3] = 0;
    buffer[pixel.y()*(image->bytesPerLine()) + pixel.x()*3 + 1] = 0;
    buffer[pixel.y()*(image->bytesPerLine()) + pixel.x()*3 + 2] = 0;
}

void BernoulliLemniscate::drawFocus(bool side, QImage* image){
    Vector focus = side ? f1 : f2;
    Vector center(image->width()/2, image->height()/2);

    for(int h = -2; h < 3; h++)
        for(int w = -2; w < 3; w++)
            if(w * w + h * h <= 2 * 2)
                setPixel(focus.varyTo(w, h) + center, image);
}

Vector BernoulliLemniscate::getNextPoint(Vector curV, Vector prevV){
    Vector sub;
    long long minValue = std::numeric_limits<int>::min();// = LONG_LONG_MAX;
    long long tmp;
    if(curV.varyTo(1, 0) != prevV){
        tmp = std::abs(calculate(curV.varyTo(1, 0)) - r*r*r*r);
        if(tmp < minValue){
            minValue = tmp;
            sub = Vector(1, 0);
        }
    }
    if(curV.varyTo(-1, 0) != prevV){
        tmp = std::abs(calculate(curV.varyTo(-1, 0)) - r*r*r*r);
        if(tmp < minValue){
            minValue = tmp;
            sub = Vector(-1, 0);
        }
    }
    if(curV.varyTo(0, 1) != prevV){
        tmp = std::abs(calculate(curV.varyTo(0, 1)) - r*r*r*r);
        if(tmp < minValue){
            minValue = tmp;
            sub = Vector(0, 1);
        }
    }
    if(curV.varyTo(0, -1) != prevV){
        tmp = std::abs(calculate(curV.varyTo(0, -1)) - r*r*r*r);
        if(tmp < minValue){
            minValue = tmp;
            sub = Vector(0, -1);
        }
    }

    return curV + sub;
}

Vector BernoulliLemniscate::getNextPoint(Vector curV, Permission perm){
    Vector sub;
    long long minValue = std::numeric_limits<int>::min();//quint64;// = LONG_LONG_MAX;
    long long tmp;
    if(perm.right){
        tmp = std::abs(calculate(curV.varyTo(1, 0)) - r*r*r*r);
        if(tmp < minValue){
            minValue = tmp;
            sub = Vector(1, 0);
        }
    }
    if(perm.left){
        tmp = std::abs(calculate(curV.varyTo(-1, 0)) - r*r*r*r);
        if(tmp < minValue){
            minValue = tmp;
            sub = Vector(-1, 0);
        }
    }
    if(perm.up){
        tmp = std::abs(calculate(curV.varyTo(0, 1)) - r*r*r*r);
        if(tmp < minValue){
            minValue = tmp;
            sub = Vector(0, 1);
        }
    }
    if(perm.down){
        tmp = std::abs(calculate(curV.varyTo(0, -1)) - r*r*r*r);
        if(tmp < minValue){
            minValue = tmp;
            sub = Vector(0, -1);
        }
    }

    return curV + sub;
}

Vector BernoulliLemniscate::findStart(bool side){
    Vector diff = f1.diffTo(f2);
    Vector start = side ? f1 : f2;
    if (diff.isNull())
        diff.rx() = 1;

    Vector sign(1, 1);

    if(side ? (f1.x() <= f2.x()) : (f2.x() < f1.x()))
        sign.rx() *= -1;
    if(side ? (f1.y() <= f2.y()) : (f2.y() < f1.y()))
        sign.ry() *= -1;

    while(calculate(start + diff.scaleTo(sign)) <= r*r*r*r)
        diff *= 2;

    Vector end = start + diff.scaleTo(sign);
    Vector center;

    while(diff > 1){
        diff /= 2;
        center = start + diff.scaleTo(sign);

        if(calculate(center) > r*r*r*r)
            end = center;
        else
            start = center;

        diff = start.diffTo(end);
    }

    if(std::abs(calculate(start) - r*r*r*r) < std::abs(calculate(end) - r*r*r*r))
        return start;

    return end;
}

void BernoulliLemniscate::changePermisiion(Vector difference, Permission* perm){
    if(!perm)
        return;
    if(difference.x() > 0)
        perm->right = false;
    else
        if(difference.x() < 0)
            perm->left = false;
        else
            if(difference.y() > 0)
                perm->up = false;
            else
                if(difference.y() < 0)
                    perm->down = false;
}

void BernoulliLemniscate::drawPart(const Vector& start, bool currentFocus, QImage *image){
    Vector center(image->width()/2, image->height()/2);
    Vector focus, otherFocus;

    setPixel(center + start, image);

    if(currentFocus){
        focus = f1;
        otherFocus = f2;
    }else{
        focus = f2;
        otherFocus = f1;
    }

    if(focus.diffTo(start) <= 1)
        return;

    Vector previous = start;
    Vector current = getNextPoint(start, start);
    Permission perm = {true, true, true, true};
    changePermisiion(current - previous, &perm);

    setPixel(center + current, image);
    int startMul = (start - focus)*(current - focus);
    int previousMul = startMul;

    for(int i = 0; i < 2; ++i){
        if(i == 1){
            previous = start;
            current = getNextPoint(start, perm);
            changePermisiion(current - previous, &perm);

            startMul = (start - focus)*(current - focus);

            if((startMul < 0 && previousMul < 0) || (startMul > 0 && previousMul > 0)){
                i--;
                continue;
            }
            setPixel(center + current, image);
        }

        bool breakingFlag = false;
        while(startMul == 0){
            Vector tmp = current;
            current = getNextPoint(current, previous);
            previous = tmp;

            startMul = (start - focus)*(current - focus);

            if((startMul < 0 && previousMul < 0) || (startMul > 0 && previousMul > 0)){
                i--;
                breakingFlag = true;
                break;
            }
            if(startMul != 0)
                previousMul = startMul;

            setPixel(center + current, image);

            if(current.distanceTo(focus) > current.distanceTo(otherFocus)){
                breakingFlag = true;
                break;
            }
        }


        int currentMul = (start - focus)*(current - focus);
        while((currentMul < 0 && startMul < 0) || (currentMul > 0 && startMul > 0)){
            if(breakingFlag)
                break;
            Vector tmp = current;
            current = getNextPoint(current, previous);
            previous = tmp;
            currentMul = (start - focus)*(current - focus);

            setPixel(center + current, image);

            if(current.distanceTo(focus) > current.distanceTo(otherFocus)){
                break;
            }
        }
    }
}

void BernoulliLemniscate::draw(QImage* image){
    if(r <= 0)
        return;
    center = Vector(image->width()/2, image->height()/2);
    drawFocus(true, image);
    drawFocus(false, image);

    Vector start = findStart(true);
//    start = getNextPoint(start, start);
    drawPart(start, true, image);

    start = findStart(false);
//    start = getNextPoint(start, start);
    drawPart(start, false, image);
}
*/
