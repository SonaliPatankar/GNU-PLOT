#pragma once
#include"Point.h"
#include"Shape.h"

namespace geometry
{
class Line : public Shape
{
    
    public:
    Line(Point2D p1, Point2D p2);
    ~Line();

    public:
    Point2D pointP1();
    Point2D pointP2();
    void plot();
    float perimeter();
    
    private:
    Point2D mPointP1;
    Point2D mPointP2;
};
}