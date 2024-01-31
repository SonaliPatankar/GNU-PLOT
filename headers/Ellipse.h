#pragma once
#include"Shape.h"
#include"Point.h"
namespace geometry
{
    class Ellipse : public Shape
{
    public:
    Ellipse(float majorAxis, float minorAxis);
    ~Ellipse();
    public:
    float majorAxis();
    float minorAxis();
    void plot();
    float perimeter();
    float area();
    private:
    float mMajorAxis;
    float mMinorAxis;
};
}