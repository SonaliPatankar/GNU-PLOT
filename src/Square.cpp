#include "../headers/Square.h"
#include<fstream>
using namespace geometry;
using namespace std;

Square :: Square(float length)
{
    mLength = length;
}
Square :: ~Square()
{

}

float Square :: length()
{
    return mLength;
}

void Square :: plot()
{
    
    Point2D origin;
     ofstream MyFile("D:/sonali_workspace/C++/2DShapes/textfiles/square.txt", ofstream::trunc);
    //   Write to the file
      
    MyFile<< origin.xCordinate() << ", " << origin.yCordinate() << " \n"
    << mLength <<", "<<0<< "\n" 
    << mLength << ", " << mLength << " \n"
    <<0<< ", " << mLength << "\n"
    <<origin.xCordinate() << ", " << origin.yCordinate();

    //   Close the file
      MyFile.close();
}
float Square :: perimeter()
{
    float c= 2.0*(mLength + mLength);
    return c;
}
float Square :: area()
{
    return mLength*mLength;
}

