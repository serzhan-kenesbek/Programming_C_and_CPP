#include <iostream>
#include <cmath>
#include "Square.h"

Square::Square(const char *n, double a) : 
Rectangle(n, a, a)
{
    side = a;
}

Square::~Square() {
}

double Square::calcArea() const {
	std::cout << "calcArea of Square...";
	return side * side;
}

double Square::calcPerimeter() const {
	std::cout << "calcPerimeter of Square...";
	return side * 4;
}