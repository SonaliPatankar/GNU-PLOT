#include <cmath>
#include <fstream>
#include <iostream>
#include "../headers/Triangle.h"
#include "../headers/Line.h"
using namespace geometry;
using namespace std;

Triangle ::Triangle(Point2D p1, Point2D p2, Point2D p3)
{
    mPointP1 = p1;
    mPointP2 = p2;
    mPointP3 = p3;
}
Triangle ::~Triangle()
{
}

Point2D Triangle ::pointP1() const
{
    return mPointP1;
}
Point2D Triangle ::pointP2() const
{
    return mPointP2;
}
Point2D Triangle ::pointP3() const
{
    return mPointP3;
}
void Triangle ::plot()
{
    ofstream myFile("D:/sonali_workspace/C++/2DShapes/textfiles/triangle.txt", ofstream::trunc);
    // Write to the file
    myFile << mPointP1.xCordinate() << " " << mPointP1.yCordinate();
    myFile << "\n";
    myFile << mPointP2.xCordinate() << " " << mPointP2.yCordinate();
    myFile << "\n";
    myFile << mPointP3.xCordinate() << " " << mPointP3.yCordinate();
    myFile << "\n";
    myFile << mPointP1.xCordinate() << " " << mPointP1.yCordinate();

    //   Close the file
    myFile.close();
}
float Triangle ::perimeter()
{
    Line line1(mPointP1, mPointP2);
    Line line2(mPointP2, mPointP3);
    Line line3(mPointP1, mPointP3);
    float len = line1.perimeter() + line2.perimeter() + line3.perimeter();
    return len;
}
float Triangle ::area()
{
    float semiPerimeter = perimeter() / 2;
    Line line1(mPointP1, mPointP2);
    Line line2(mPointP2, mPointP3);
    Line line3(mPointP1, mPointP3);
    float araeOfTriangle = (semiPerimeter - line1.perimeter()) * (semiPerimeter - line2.perimeter()) * (semiPerimeter - line3.perimeter());
    araeOfTriangle = sqrtf(araeOfTriangle);
    return araeOfTriangle;
}
