/*
CH-230-A
a11_p5.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name  

        // getters
        std::string getName() const;

        // setters
        void setName(std::string newname);
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center

        // getters
        double getX() const;
        double getY() const;

        // setters
        void setX(double newx);
        void setY(double newy);
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);

        // getters
        int getEdgesNumber() const;

        // setters
        void setEdgesNumber(int newedgesnumber);
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);

        // getters
        double getRadius() const;

        // setters
        void setRadius(double newRadius);

        // radius and area methods
        double perimeter();
        double area();
};

// Rectangle is a regular polygon with a width and a height
class Rectangle : public RegularPolygon {
    private: 
        double width;
        double height;
    public:
        Rectangle(const std::string&, double, double, double, double) ;
        Rectangle();
        Rectangle(const Rectangle&);

        // getters
        double getWidth() const;
        double getHeight() const;

        // setters
        void setWidth(double newwidth);
        void setHeight(double newheight);

        // radius and area methods
        double perimeter();
        double area();
};

// Square is a rectangle with same width and height
class Square : public Rectangle {
    private:
        double side;
    public:
        Square(const std::string&, double, double, double);
        Square();
        Square(const Square&);

        // getters
        double getSide() const;

        // setters
        void setSide(double newside);

        // radius and area methods
        double perimeter();
        double area();
};
    
#endif