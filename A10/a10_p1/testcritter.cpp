/*
CH-230-A
a10_p2.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"
 
using namespace std;
 
int main(int argc, char** argv)
{
    Critter c;
 
    string name;
    int hunger;
    double width;
    double weight;
 
    cout << endl << "Please enter data: " << endl;
    cout << "Name: ";
    // cin >> name; will not work if name contains
    // spaces
    getline(cin, name);
    c.setName(name);
    cout << "Hunger: ";
    cin >> hunger;
    c.setHunger(hunger);
    // input for the new properties
    cout << "Width: ";
    cin >> width;
    c.setWidth(width);
    
    cout << "Weight: ";
    cin >> weight;
    c.setWeight(weight);
 
    cout << "You have created:" << endl;
    c.print();
    return 0;
}
