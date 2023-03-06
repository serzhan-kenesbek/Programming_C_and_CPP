/*
CH-230-A
a11_p5.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include <math.h>

using namespace std; 

// default constructors
Shape::Shape() :
    name("shape")
{}

CenteredShape::CenteredShape() :
Shape("centered_shape"), x(0), y(0)
{}

RegularPolygon::RegularPolygon() :
    CenteredShape("regular_polygon", 0, 0), EdgesNumber(0)
{}

Rectangle::Rectangle() :
    RegularPolygon("rectangle", 0, 0, 4), width(0), height(0)
{
    /* Rectangle is a Regular Polygon with 4 sides
    so EdgesNumber is set to 4 */
}

Square::Square() :
    Rectangle("square", 0, 0, 0, 0), side(0)
{}

Circle::Circle() :
    CenteredShape("circle", 0, 0), Radius(0)
{}

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

double Circle::getRadius() const {
    return Radius;
}

double Rectangle::getHeight() const {
    return height;
}

double Rectangle::getWidth() const {
    return width;
}

double Square::getSide() const {
    return side;
}

// setters
void Shape::setName(std::string newname) {
    name = newname;
}

void CenteredShape::setX(double newx) {
    x = newx;
}

void CenteredShape::setY(double newy) {
    y = newy;
}

void RegularPolygon::setEdgesNumber(int newedgesnumber) {
    EdgesNumber = newedgesnumber;
}

void Circle::setRadius(double newRadius) {
    Radius = newRadius;
}

void Rectangle::setHeight(double newheight) {
    height = newheight;
}

void Rectangle::setWidth(double newwidth) {
    width = newwidth;
}

void Square::setSide(double newside) {
    side = newside;
}

// method for printing shape name
void Shape::printName() const {
	cout << name << endl;
}

// parametetric constructors
Shape::Shape(const string& n) : name(n) {
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

// 2 new parametric constructors
Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth, 
double nheight) :
RegularPolygon(n, nx, ny, 4), width(nwidth), height(nheight)
{

}

Square::Square(const string& n, double nx, double ny, double nside) :
Rectangle(n, nx, ny, nside, nside), side(nside)
{

}

// copy constructors for all classes
Shape::Shape(const Shape &s) {
    name = s.name;
}

CenteredShape::CenteredShape(const CenteredShape &cs) :
Shape(cs.getName())
{
    x = cs.x;
    y = cs.y;    
}

RegularPolygon::RegularPolygon(const RegularPolygon &rp) :
CenteredShape(rp.getName(), rp.getX(), rp.getY())
{
    EdgesNumber = rp.EdgesNumber;
}

Circle::Circle(const Circle &circle) :
CenteredShape(circle.getName(), circle.getX(), circle.getY())
{
    Radius = circle.Radius;
}

Rectangle::Rectangle(const Rectangle &r) :
RegularPolygon(r.getName(), r.getX(), r.getY(), r.getEdgesNumber())
{
    width = r.width;
    height = r.height;
}

Square::Square(const Square &s) :
Rectangle(s.getName(), s.getX(), s.getY(), s.getSide(), s.getSide())
{
    side = s.side;
}

// radius and area methods
double Circle::perimeter() {
    // M_PI is Pi constant in c++.
    // It is a part of math.h and cmath.h libraries
    return (2 * M_PI * getRadius());
}

double Circle::area() {
    return (M_PI * getRadius() * getRadius());
}

double Rectangle::perimeter() {
    return ((getWidth() + getHeight()) * 2);
}

double Rectangle::area() {
    return getWidth() * getHeight();
}

double Square::perimeter() {
    return 4 * getSide();
}

double Square::area() {
    return getSide() * getSide();
}