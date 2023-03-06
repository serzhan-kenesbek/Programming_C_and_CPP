#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

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

const int num_obj = 25;
int main()
{
	Area *list[num_obj]; // polymorpishm only works with pointers and
						  // references, so we create an array of pointers
						  // to objects

	char *colors[] = {(char *)"RED", (char *)"BLACK"
	, (char *)"VIOLET", (char *)"BLUE"};

	double area;
	double perimeter;

	srand(static_cast<unsigned int>(time(NULL)));
	// variable to generate random array index between 0 and 3 for colors
	int rcolorindex;
	// variables to generate random numbers between 5 and 100 for size
	int randomsize1, randomsize2;
	// variable to generate random number for classes
	int classindex;

	// loop to create 25 random objects
	for (int i = 0; i < num_obj; i++)
	{
		cout << "Object " << i + 1 << ":" << endl;
		rcolorindex = rand() % 4;
		classindex = (rand() % 4) + 1;
		// switch statement to create a random object
		switch (classindex)
		{
			// random circle
			case 1:
				{
					cout << "---- Circle ----" << endl;
					randomsize1 = (rand() % 96) + 5;
					Circle c(colors[rcolorindex], randomsize1);
					list[i] = &c;
					area = list[i]->calcArea();
					cout << endl;
					perimeter = list[i]->calcPerimeter();
					cout << endl;
					cout << "Color: " << colors[rcolorindex] << endl;
					cout << "Radius: " << randomsize1 << endl;
					cout << "Area: " << area << endl;
					cout << "Perimeter: " << perimeter << endl
						<< endl;
					break;
				}
			// random square
			case 2:
				{
					cout << "---- Square ----" << endl;
					randomsize1 = (rand() % 96) + 5;
					Square s(colors[rcolorindex], randomsize1);
					list[i] = &s;
					area = list[i]->calcArea();
					cout << endl;
					perimeter = list[i]->calcPerimeter();
					cout << endl;
					cout << "Color: " << colors[rcolorindex] << endl;
					cout << "Side: " << randomsize1 << endl;
					cout << "Area: " << area << endl;
					cout << "Perimeter: " << perimeter << endl
						<< endl;
					break;
				}
			// random rectangle
			case 3:
				{
					cout << "---- Rectangle ----" << endl;
					randomsize1 = (rand() % 96) + 5;
					randomsize2 = (rand() % 96) + 5;
					Rectangle r(colors[rcolorindex], randomsize1, randomsize2);
					list[i] = &r;
					area = list[i]->calcArea();
					cout << endl;
					perimeter = list[i]->calcPerimeter();
					cout << endl;
					cout << "Color: " << colors[rcolorindex] << endl;
					cout << "Length: " << randomsize1 << endl;
					cout << "Width: " << randomsize2 << endl;
					cout << "Area: " << area << endl;
					cout << "Perimeter: " << perimeter << endl
						<< endl;
					break;
				}
			// random ring
			case 4:
				{
					cout << "---- Ring ----" << endl;
					randomsize1 = (rand() % 96) + 5;
					randomsize2 = (rand() % 96) + 5;
					Ring ri(colors[rcolorindex], randomsize1, randomsize2);
					list[i] = &ri;
					area = list[i]->calcArea();
					cout << endl;
					perimeter = list[i]->calcPerimeter();
					cout << endl;
					cout << "Color: " << colors[rcolorindex] << endl;
					cout << "Outer Radius: " << randomsize1 << endl;
					cout << "Inner Radius: " << randomsize2 << endl;
					cout << "Area: " << area << endl;
					cout << "Perimeter: " << perimeter << endl
						<< endl;
					break;
				}
		}
	}
	
	return 0;
}
