#ifndef TEST_CIRCLE_H
#define TEST_CIRCLE_H

#include <QObject>
#include <QTest>

#include "circle.h"

class Test_Circle : public QObject
{
    Q_OBJECT
private slots:
    void testPositionX();
    void testPositionY();
    void testPositionRadius();
};

#endif // TEST_CIRCLE_H
