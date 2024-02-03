#include <cmath>
#include "../headers/Point2D.h"
using namespace geometry;

Point2D::Point2D()
{
    mXCordinate = 0.0;
    mYCordinate = 0.0;
}

Point2D ::~Point2D()
{
}

Point2D ::Point2D(float xCordinate1, float yCordinate1)
{
    mXCordinate = xCordinate1;
    mYCordinate = yCordinate1;
}

float Point2D ::xCordinate() const
{
    return mXCordinate;
}

float Point2D ::yCordinate() const
{
    return mYCordinate;
}

void Point2D ::setXCordinate(float x)
{
    mXCordinate = x;
}
void Point2D ::setYCordinate(float y)
{
    mYCordinate = y;
}
