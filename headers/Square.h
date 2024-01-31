#pragma once
#include"Shape.h"
#include"Point.h"
namespace geometry
{
    class Square : public Shape
{
    public:
    Square(float length);
    ~Square();

    public:
    float length();
    void plot();
    float perimeter();
    float area();

    private:
    float mLength;
};
}