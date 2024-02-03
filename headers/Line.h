#pragma once
#include"Point2D.h"
#include"Shape.h"

namespace geometry
{
class Line : public Shape
{
    
    public:
    Line(Point2D p1, Point2D p2);
    ~Line();

    public:
    Point2D pointP1() const;
    Point2D pointP2() const;
    void plot()override;
    float perimeter()override;
    
    private:
    Point2D mPointP1;
    Point2D mPointP2;
};
}