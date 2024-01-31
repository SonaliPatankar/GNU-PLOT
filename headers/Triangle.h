#pragma once
#include"Point.h"
#include"Shape.h"

namespace geometry
{

class Triangle : public Shape
{
    public:

    Triangle(Point2D p1, Point2D p2, Point2D p3);
    ~Triangle();
    Point2D pointP1();
    Point2D pointP2();
    Point2D pointP3();
    void plot();
    float perimeter();
    float area();
    private:
    Point2D mPointP1;
    Point2D mPointP2;
    Point2D mPointP3;
};
}