#include "test_circle.h"

void Test_Circle::testPositionX()
{
    Circle circle;

    circle.setPositionX( 5.0 );
    QCOMPARE( circle.getX(), 5.0 );
}

void Test_Circle::testPositionY()
{
    Circle circle;

    circle.setPositionY( 20.0);
    QCOMPARE( circle.getY(), 20.0 );
}

void Test_Circle::testPositionRadius()
{
    Circle circle;

    circle.setRadius( 78.0 );
    QCOMPARE( circle.getR(), 78.0 );
}
