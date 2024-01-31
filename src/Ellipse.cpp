#include "../headers/Ellipse.h"
#include<fstream>
#include<cmath>
using namespace geometry;
using namespace std;

Ellipse :: Ellipse(float majorAxis, float minorAxis)
{
    mMajorAxis = majorAxis;
    mMinorAxis = minorAxis;
}
Ellipse :: ~Ellipse()
{

}

void Ellipse :: plot()
{
    int numOfPoints = 250;
    ofstream MyFile("D:/sonali_workspace/C++/2DShapes/textfiles/ellipse.txt", ofstream::trunc);
    //   Write to the file   
    for (int i = 0; i < numOfPoints; ++i)
        {
            Point2D origin;
            double angleTheta = 2.0 * M_PI * i / numOfPoints;
            double x = origin.xCordinate() + mMajorAxis * cos(angleTheta);
            double y = origin.yCordinate() + mMinorAxis * sin(angleTheta);
            MyFile << x << " " << y << " " << mMajorAxis <<  mMinorAxis<< std::endl;
        }

    //   Close the file
      MyFile.close();
}
float Ellipse :: perimeter()
{
    float perimetereOfEllipse = (mMajorAxis*mMajorAxis)+(mMinorAxis*mMinorAxis);
    perimetereOfEllipse = perimetereOfEllipse/2;
    perimetereOfEllipse = 2 * M_PI*sqrt(perimetereOfEllipse);
    return perimetereOfEllipse;
}
float Ellipse :: area()
{
    return M_PI * M_PI*mMajorAxis*mMinorAxis;
}

