#pragma once
#include"Shape.h"
#include"Point.h"
namespace geometry
{
    class Circle : public Shape
{
   
    public:
    Circle(float radius);
    ~Circle();

    public:
    float radius();
    void plot();
    float perimeter();
    float area();

    private:
    float mRadius;

};
}