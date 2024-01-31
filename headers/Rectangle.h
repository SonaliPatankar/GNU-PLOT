#pragma once
#include"Shape.h"
#include"Point.h"
namespace geometry
{
    class Rectangle : public Shape
{
    
    public:
    Rectangle(float length, float breadth);
    ~Rectangle();

    public:
    float length();
    float breadth();
    void plot();
    float perimeter();
    float area();

    private:
    float mLength;
    float mBreadth;

};
}