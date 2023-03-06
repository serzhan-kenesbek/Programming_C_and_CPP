/*
CH-230-A
a12_p1.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

// please refer to shapes.h for methods documentation

#include <iostream>
#include <cmath>
#include "Shapes.h"

using namespace std; 

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

// setters
void Shape::setName(std::string newname) {
    name = newname;
}

void CenteredShape::setX(double nx) {
    x = nx;
}

void CenteredShape::setY(double ny) {
    y = ny;
}

void RegularPolygon::setEdgesNumber(int newedgesnumber) {
    EdgesNumber = newedgesnumber;
}

// getters
std::string Shape::getName() const {
    return name;
}

double CenteredShape::getX() const {
    return x;
}

double CenteredShape::getY() const {
    return y;
}

int RegularPolygon::getEdgesNumber() const {
    return EdgesNumber;
}

// constructors for derived class Hexagon
Hexagon::Hexagon(const string& n, double nx, double ny, 
int nl, double nside, const string& ncolor) :
RegularPolygon(n, nx, ny, nl), side(nside), color(ncolor)
{}

Hexagon::Hexagon(const Hexagon &h) :
RegularPolygon(h.getName(), h.getX(), h.getY(), h.getEdgesNumber())
{
    side = h.side;
    color = h.color;
}

Hexagon::~Hexagon() 
{

}

double Hexagon::perimeter() {
    return side * 6;
}

double Hexagon::area() {
    return ((3 * sqrt(3)) / 2) * (side * side);
}

void Hexagon::setSide(double newside) {
    side = newside;
}

void Hexagon::setColor(std::string newcolor) {
    color = newcolor;
}

double Hexagon::getSide() const {
    return side;
}

std::string Hexagon::getColor() const {
    return color;
}