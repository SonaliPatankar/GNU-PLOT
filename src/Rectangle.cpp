#include "../headers/Rectangle.h"
#include <fstream>
using namespace geometry;
using namespace std;

Rectangle ::Rectangle(float length, float breadth)
{
    mLength = length;
    mBreadth = breadth;
}
Rectangle ::~Rectangle()
{
}

float Rectangle ::length() const
{
    return mLength;
}
float Rectangle ::breadth() const
{
    return mBreadth;
}

void Rectangle ::plot()
{

    Point2D origin;
    ofstream myFile("D:/sonali_workspace/C++/2DShapes/textfiles/rectangle.txt", ofstream::trunc);
    //   Write to the file

    myFile << origin.xCordinate() << ", " << origin.yCordinate() << " \n"
           << mLength << ", " << 0 << "\n"
           << mLength << ", " << mBreadth << " \n"
           << 0 << ", " << mBreadth << "\n"
           << origin.xCordinate() << ", " << origin.yCordinate();

    //   Close the file
    myFile.close();
}
float Rectangle ::perimeter()
{
    float c = 2.0 * (mLength + mBreadth);
    return c;
}
float Rectangle ::area()
{
    return mLength * mBreadth;
}
