#pragma once
#include"Shape.h"
#include"Point2D.h"
namespace geometry
{
    class Ellipse : public Shape
{
    public:
    Ellipse(float majorAxis, float minorAxis);
    ~Ellipse();
    public:
    float majorAxis() const;
    float minorAxis() const;
    void plot() override;
    float perimeter() override;
    float area();
    private:
    float mMajorAxis;
    float mMinorAxis;
};
}