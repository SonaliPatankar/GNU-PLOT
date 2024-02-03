#pragma once
#include "Shape.h"
#include "Point2D.h"
namespace geometry
{
    class Circle : public Shape
    {

    public:
        Circle(float radius);
        ~Circle();
    public:
        float radius() const;
        void plot()override;
        float perimeter()override;
        float area();
    private:
        float mRadius;
    };
}