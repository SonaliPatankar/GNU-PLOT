#include <fstream>
#include <iostream>
#include <cmath>
#include "./headers/Line.h"
#include "./headers/Triangle.h"
#include "./headers/Rectangle.h"
#include "./headers/Circle.h"
#include "./headers/Ellipse.h"
#include "./headers/Square.h"
using namespace geometry;
using namespace std;

int main()
{
  int choice;
  char choice1;
  do
  {
    cout << "Enter your choice \n1. Line \n2. Triangele \n3. Rectangle \n4. Circle \n5. Ellipse";
  cin >> choice;

  switch (choice)
  {
  case 1:
  {
    float x1;
    float y1;
    float x2;
    float y2;
    cout << "Enter 4 co-ordintes \n";
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2 && y1 == y2)
    {
      cout << "all cordinates cannot be same \n";
    }
    {
      Point2D point1(x1, y1);
      Point2D point2(x2, y2);
      Line line1(point1, point2);
      line1.plot();
      cout << "Length of line is "<<line1.perimeter() << "\n";
    }
  }
  break;
  case 2:
  {
    float x1;
    float y1;
    float x2;
    float y2;
    float x3;
    float y3;
    cout << "Enter 6 co-ordintes \n";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if (y3 == x1 && y3 == y2)
      cout << "all Y coordinate of triangle cannot be same";
    else
    {
      Point2D point1(x1, y1);
      Point2D point2(x2, y2);
      Point2D point3(x3, y3);
      Triangle triangle1(point1, point2, point3);
      cout <<"Perrimeter of triangle is "<< triangle1.perimeter() << "\n";
      cout<<"Area of triangle is "<<triangle1.area()<<"\n";
      triangle1.plot();
    }
  }
  break;
  case 3:
  {
    float length;
    float breadth;
    cout << "enter length and breadth \n";
    cin >> length >> breadth;
    Rectangle rectangle1(length, breadth);
    rectangle1.plot();
    cout << "area of reactangle is " << rectangle1.area() << "\n";
    cout << "Perimeter of rectangle is " << rectangle1.perimeter() << "\n";
  }
  break;
  case 4:
  {
    float radius;
    cout << "Enter radius \n";
    cin >> radius;
    if (radius <= 0)
    {
      cout << "Radius cannot be 0 or less than 0";
    }
    else
    {
      Circle circle1(radius);
      circle1.plot();
      cout << "Area of circle is " << circle1.area() << endl;
      cout << "Perimeter of circle is " << circle1.perimeter() << endl;
    }
  }
  break;

  case 5:
  {
    float minorAxis;
    float majorAxis;
    cout << "Enter major and miniar axis \n";
    cin >> majorAxis >> minorAxis;
    Ellipse ellipse1(majorAxis, minorAxis);
    ellipse1.plot();
    cout << "Area of ellipse is " << ellipse1.area() << endl;
    cout << "Perimeter of ellipse is " << ellipse1.perimeter() << endl;
  }
  break;
  case 6:
  {
    float length;
    cout << "enter length \n";
    cin >> length;
    Square square1(length);
    square1.plot();
    cout << "area of square is " << square1.area() << "\n";
    cout << "Perimeter of square is " << square1.perimeter() << "\n";
  }
  break;
  default :cout<<"wrong choice \n";
  break;

  }
  cout<<"do you want to continue(y/n) ?";
  cin>>choice1;
  } while (choice1 == 'y');
  return 0;
}
