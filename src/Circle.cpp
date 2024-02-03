#include "../headers/Circle.h"
#include <fstream>
#include <cmath>
using namespace geometry;
using namespace std;

Circle ::Circle(float radius)
{
    mRadius = radius;
}
Circle ::~Circle()
{
}

float Circle ::radius() const
{
    return mRadius;
}
void Circle ::plot()
{
    int numOfPoints = 250;
    ofstream myFile("filename.txt");
    //   Write to the file

    for (int i = 0; i < numOfPoints; ++i)
    {
        Point2D origin;

        double angleTheta = 2.0 * M_PI * i / numOfPoints;
        double x = origin.xCordinate() + mRadius * cos(angleTheta);
        double y = origin.yCordinate() + mRadius * sin(angleTheta);
        myFile << x << " " << y << " " << mRadius << std::endl;
    }

    //   Close the file
    myFile.close();
}
float Circle ::perimeter()
{
    float c = 2.0 * (M_PI * mRadius);
    return c;
}
float Circle ::area()
{
    return M_PI * mRadius * mRadius;
}
