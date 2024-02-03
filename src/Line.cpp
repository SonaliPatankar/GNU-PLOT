#include <cmath>
#include <fstream>
#include "../headers/Line.h"
using namespace geometry;
using namespace std;

Line ::Line(Point2D p1, Point2D p2)
{
    mPointP1 = p1;
    mPointP2 = p2;
}

Line ::~Line()
{
}
float Line ::perimeter()
{
    float xValue = (mPointP2.xCordinate() - mPointP1.xCordinate()) * (mPointP2.xCordinate() - mPointP1.xCordinate());
    float yValue = (mPointP2.yCordinate() - mPointP1.yCordinate()) * (mPointP2.yCordinate() - mPointP1.yCordinate());
    float len = sqrtf(xValue + yValue);
    return len;
}

void Line::plot()
{

    ofstream myFile("D:/sonali_workspace/C++/2DShapes/textfiles/line.txt", ofstream::trunc);
    // Write to the file
    myFile << mPointP1.xCordinate() << " " << mPointP1.yCordinate();
    myFile << "\n";

    myFile << mPointP2.xCordinate() << " " << mPointP2.yCordinate();
    myFile << "\n";
    //   Close the file
    myFile.close();
}

Point2D Line ::pointP1() const
{
    return mPointP1;
}

Point2D Line ::pointP2() const
{
    return mPointP2;
}
