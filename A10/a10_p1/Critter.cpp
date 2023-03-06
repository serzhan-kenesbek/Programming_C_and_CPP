/*
CH-230-A
a10_p2.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"
 
// using namespace std;
 
void Critter::setName(std::string& newname) {
    name = newname;
}
 
void Critter::setHunger(int newhunger) {
    hunger = newhunger;
}
 
void Critter::print() {
    std::cout << "I am " << name << ". My hunger level is " << hunger
    <<". My width is " << width << ". My weight is " << weight 
    << "." << std::endl;
}
 
int Critter::getHunger() {
    return hunger;
}
 
void Critter::setWidth(double newwidth) {
    width = newwidth;
}
 
double Critter::getWidth() {
    return width;
}
 
void Critter::setWeight(double newweight) {
    weight = newweight;
}
 
double Critter::getWeight() {
    return weight;
}
