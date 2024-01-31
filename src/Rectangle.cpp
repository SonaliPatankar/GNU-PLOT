#include "../headers/Rectangle.h"
#include<fstream>
using namespace geometry;
using namespace std;

Rectangle :: Rectangle(float length, float breadth)
{
    mLength = length;
    mBreadth = breadth;
}
Rectangle :: ~Rectangle()
{

}

float Rectangle :: length()
{
    return mLength;
}
    float Rectangle :: breadth()
    {
        return mBreadth;
    }

void Rectangle :: plot()
{
    
    Point2D origin;
     ofstream MyFile("D:/sonali_workspace/C++/2DShapes/textfiles/rectangle.txt", ofstream::trunc);
    //   Write to the file
      
    MyFile<< origin.xCordinate() << ", " << origin.yCordinate() << " \n"
    << mLength <<", "<<0<< "\n" 
    << mLength << ", " << mBreadth << " \n"
    <<0<< ", " << mBreadth << "\n"
    <<origin.xCordinate() << ", " << origin.yCordinate();

    //   Close the file
      MyFile.close();
}
float Rectangle :: perimeter()
{
    float c= 2.0*(mLength + mBreadth);
    return c;
}
float Rectangle :: area()
{
    return mLength*mBreadth;
}

