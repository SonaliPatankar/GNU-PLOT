#pragma once
#include"Shape.h"
#include"Point2D.h"
namespace geometry
{
    class Square : public Shape
{
    public:
    Square(float length);
    ~Square();

    public:
    float length() const;
    void plot() override;
    float perimeter() override;
    float area();

    private:
    float mLength;
};
}