#include<cmath>
#include<fstream>
#include "../headers/Line.h"
using namespace geometry;
using namespace std;

Line :: Line(Point2D p1, Point2D p2)  
// : pointp1(p1.getXCordinate(),p1.getYCordinate()),pointp2(p2.getXCordinate(),p2.getYCordinate())
    {
        mPointP1 = p1;
        mPointP2 = p2;
               
    }

Line :: ~Line()
 {

 }
  float Line :: perimeter()
    {
        float xValue = (mPointP2.xCordinate()-mPointP1.xCordinate())*(mPointP2.xCordinate()-mPointP1.xCordinate());
    float yValue = (mPointP2.yCordinate()-mPointP1.yCordinate())*(mPointP2.yCordinate()-mPointP1.yCordinate());
    float len = sqrtf(xValue + yValue);
    return len;
    }

    void Line:: plot()
    {
        
       ofstream MyFile("D:/sonali_workspace/C++/2DShapes/textfiles/line.txt", ofstream::trunc);
      // Write to the file
      MyFile<<mPointP1.xCordinate()<<" "<<mPointP1.yCordinate();
      MyFile<<"\n";

      MyFile<<mPointP2.xCordinate()<<" "<<mPointP2.yCordinate();
      MyFile<<"\n";
    //   Close the file
      MyFile.close();
    }

Point2D Line :: pointP1()
{
    return mPointP1;
}


Point2D Line :: pointP2()
{
    return mPointP2;
}
 
