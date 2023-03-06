/*
CH-230-A
a11_p3.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"

using namespace std;

// default constructors
Creature::Creature(): distance(10)
{
    cout << "default constructor for Creature called\n";
}    

Wizard::Wizard() : distFactor(3)
{
    cout << "default constructor for Wizard called\n";
}  

Pegasus::Pegasus() : height(5)
{
    cout << "default constructor for Pegasus called\n";
}

Griffon::Griffon() : wingpower(7)
{
    cout << "default constructor for Griffon called\n";
}

// methods
void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}


void Pegasus::jump() const 
{
    cout << "jump distance " << (height * distance) << " meters!\n";
}


void Griffon::fly() const 
{
    cout << "flying distance " << (wingpower * distance) << " meters!\n";
}

// destructors
Creature::~Creature()
{
    cout << "destructor for Creature called\n";
}

Wizard::~Wizard()
{
    cout << "destructor for Wizard called\n";
}

Pegasus::~Pegasus()
{
    cout << "destructor for Pegasus called\n";
}

Griffon::~Griffon()
{
    cout << "destructor for Griffon called\n";
}