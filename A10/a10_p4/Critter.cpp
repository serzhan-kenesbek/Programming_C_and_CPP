/*
CH-230-A
a10_p4.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

Critter::Critter() 
: name("default_critter"), hunger(0), boredom(0), height(5)
{
	cout << "Default constructor called" << endl;
}

Critter::Critter(string newname) 
: name(newname), hunger(0), boredom(0), height(5)
{
	cout << "Constructor with only name as a parameter" << endl;
}

Critter::Critter(string new_n, int new_hu, int new_b, double new_he) 
: name(new_n), hunger(new_hu), boredom(new_b), height(new_he)
{
	cout << "Constructor with all parameters" << endl;
}

// setter methods
void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setBoredom(int newboredom) {
	boredom = newboredom;
}

void Critter::setHeight(double newheight) {
	height = newheight;
}

// getter methods
string Critter::getName() {
	return name;
}

int Critter::getHunger() {
	return hunger;
}

int Critter::getBoredom() {
	return boredom;
}

double Critter::getHeight() {
	return height;
}

void Critter::print() {
	cout << "I am " << getName() << ". My hunger level is " << getHunger()
	<< ". My boredom level is " << getBoredom() << ". My height is "
	<< getHeight() << "." << endl;
}
