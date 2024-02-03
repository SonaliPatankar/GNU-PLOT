#pragma once
#include "Point2D.h"
#include "Shape.h"

namespace geometry
{

    class Triangle : public Shape
    {
    public:
        Triangle(Point2D p1, Point2D p2, Point2D p3);
        ~Triangle();
        Point2D pointP1() const;
        Point2D pointP2() const;
        Point2D pointP3() const;
        void plot() override;
        float perimeter() override;
        float area();

    private:
        Point2D mPointP1;
        Point2D mPointP2;
        Point2D mPointP3;
    };
}