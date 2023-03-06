/*
CH-230-A
a12_p1.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"

using namespace std;

int main() {
    // Tests

    // call parametrized constructor
    Hexagon h1("Hexagon", 0, 0, 6, 9, "blue");

    Hexagon h2("Hexagon", 0, 0, 6, 15, "green");

    // call copy constructor
    Hexagon h3(h2);

    cout << "Blue Hexagon: " << endl;
    cout << "Perimeter: " << h1.perimeter() << endl;
    cout << "Area: " << h1.area() << endl;

    cout << endl;

    cout << "Green Hexagon: " << endl;
    cout << "Perimeter: " << h2.perimeter() << endl;
    cout << "Area: " << h2.area() << endl;

    cout << endl;

    cout << "Copy of the Green Hexagon: " << endl;
    cout << "Perimeter: " << h3.perimeter() << endl;
    cout << "Area: " << h3.area() << endl;

    return 0;
}