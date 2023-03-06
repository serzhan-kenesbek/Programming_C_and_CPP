/*
CH-230-A
a10_p5.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	// constructor tests
	// Call the default constructor
	Critter a;
	// set hunger level to 2
	a.setHunger(2);
	a.print();
	cout << endl;

	// Call the constructor with one parameter
	string name = "Serzhan";
	Critter b(name);
	// set hunger level to 2
	b.setHunger(2);
	b.print();
	cout << endl;

	// Call the constructor with all parameters
	string name2 = "Kenesbek";
	Critter c(name2, 2, 7, 50.5);
	c.print();
	cout << endl;

	// Call the constructor without specified height
	string name3 = "Yelshibek";
	Critter d(name3, 2, 7);
	d.print();
    return 0;
}