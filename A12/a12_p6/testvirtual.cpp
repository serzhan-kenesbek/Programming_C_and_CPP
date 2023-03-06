#include <iostream>
#include <cstdlib>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

/*

					+------+
			+-------| Area |--+
			|		+------+  |
			|		  		  |
		+--------+		      |
		| Circle |			+-----------+
		+--------+			| Rectangle |
			|				+-----------+
			|	
	     +------+
		 | Ring |
		 +------+

*/
 
const int num_obj = 6;
int main() {
	Area *list[num_obj];						// (1) create an array 
											      // of pointers to objects
	int index = 0;								// (2) variable index 
												  // used for traversal
												  // initialized to 0
	double sum_area = 0.0;						// (3) variable used for 
												  // sum of areas initialized
											      // to 0
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// (4) Calling parametrized 
												  // constructor for a Ring 
												  // object. After that objects
												  // of other classes are
												  // constructed
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	list[0] = &blue_ring;						// (6) giving the array of 
												  // pointers to objects 
												  // addresses to objects 
												  // from derived classes
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;

	// Perimeter
	double sum_perimeter = 0.0;
	while (index < num_obj) {					
		(list[index])->getColor();				
		double perimeter = list[index++]->calcPerimeter();
		sum_perimeter += perimeter;
	}
	cout << "\nThe total perimeter is "
			<< sum_perimeter << " units " << endl;

	// Area
	index = 0;									
	while (index < num_obj) {				   // (7) loop for traversing
												// the elements of the Array 
												// of pointers to objects 	
		(list[index])->getColor();				
		double area = list[index++]->calcArea(); // (8) storing areas of 
												   // objects temporarily
		sum_area += area;
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;  // printing the sum of areas
												// of all objects

	// Square object (derived class of Rectangle)
	cout << "Created Square: ";
	Square pink_square("PINK", 5);

	/*
	  ---- Diagram with Square class added ----

					+------+
			+-------| Area |--+
			|		+------+  |
			|		  		  |
		+--------+		      |
		| Circle |			+-----------+
		+--------+			| Rectangle |
			|				+-----------+
			|					  |
	     +------+				  |
		 | Ring |			+-----------+
		 +------+			|   Square  |
		 					+-----------+

	*/

	return 0;
}
