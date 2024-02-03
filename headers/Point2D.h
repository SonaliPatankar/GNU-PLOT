#pragma once

namespace geometry
{
    class Point2D{

    public:
    Point2D();
    Point2D(float xCordinate,float yCordinate);
    ~Point2D();

    public:
    float xCordinate() const;
    float yCordinate() const;
    void setXCordinate(float x);
    void setYCordinate(float y);
        
    private:
    float mXCordinate;
    float mYCordinate;
    };
}