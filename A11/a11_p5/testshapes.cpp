/*
CH-230-A
a11_p5.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"

using namespace std;

int main(int argc, char** argv) {

  Circle c("first circle", 3, 4, 7);
  RegularPolygon r("TRIANGLE", 1, 1, 3);

  r.printName();
  c.printName();

  // Tests of methods
  cout << endl;
  cout << "Tests:" << endl;
  Circle c1("example circle", 2, 3, 4);
  cout << "Area of a circle with radius " << c1.getRadius() 
  << ": " << c1.area() << endl;
  cout << "Perimeter of a circle with radius " << c1.getRadius() 
  << ": " << c1.perimeter() << endl;

  Rectangle r1("example rectangle", 3, -5, 5, 2);
  cout << "Area of a rectangle with sides " << r1.getHeight() << ", "
  << r1.getWidth() << ": " << r1.area() << endl;
  cout << "Perimeter of a rectangle with sides " << r1.getHeight() << ", "
  << r1.getWidth() << ": " << r1.perimeter() << endl;

  Square s("example square", 3, -2, 4);
  cout << "Area of a square with a side " << s.getSide()
  << ": " << s.area() << endl;
  cout << "Perimeter of a square with a side " << s.getSide()
  << ": " << s.perimeter() << endl;

    return 0;
}