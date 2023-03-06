/*
CH-230-A
a11_p1.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

using namespace std;

// default constructor
Box::Box(): 
height(0), width(0), depth(0)
{

}

// constructor with all parameters
Box::Box(double newheight, double newwidth, double newdepth):
height(newheight), width(newwidth), depth(newdepth)
{

}

// copy constructor
Box::Box(const Box& c) {
    height = c.height;
    width = c.width;
    depth = c.depth;
}

// destructor
Box::~Box() {

}

// setter methods
void Box::setHeight(double newheight) {
    height = newheight;
}

void Box::setWidth(double newwidth) {
    width = newwidth;
}

void Box::setDepth(double newdepth) {
    depth = newdepth;
}

// getter methods
double Box::getHeight() {
    return height;
}

double Box::getWidth() {
    return width;
}

double Box::getDepth() {
    return depth;
}

// method for printing volume
void Box::printVolume(int i, int n) {
    double h = getHeight(), w = getWidth(), d = getDepth();

    // volume of the box
    double volume = h * w * d;

    // output for the copied boxes
    if (i > n) {
        cout << "Volume of the Box " << i << " (Copy of Box " << i - n
        << "): " << volume << endl;
    }

    // output for the first n boxes
    else {
        cout << "Volume of the Box " << i << ": " << volume << endl;
    }
}