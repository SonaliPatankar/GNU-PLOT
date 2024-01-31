#pragma once
namespace geometry
{
    class Shape
    {
        public:
        Shape();
        ~Shape();
        protected:
        virtual void plot() = 0;
        virtual float perimeter()=0;
    };
}