#pragma once
#include"Shape.h"
#include"Point2D.h"
namespace geometry
{
    class Rectangle : public Shape
{
    
    public:
    Rectangle(float length, float breadth);
    ~Rectangle();

    public:
    float length() const;
    float breadth() const;
    void plot() override;
    float perimeter() override;
    float area();

    private:
    float mLength;
    float mBreadth;

};
}