/*
CH-230-A
a10_p3.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include "City.h"

void City::setName(std::string newname) {
    name = newname;
}

void City::setInhabitants(int newinhabitants) {
    inhabitants = newinhabitants;
}

void City::setMayor(std::string newmayor) {
    mayor = newmayor;
}

void City::setArea(double newarea) {
    area = newarea;
}

std::string City::getName() {
    return name;
}
int City::getInhabitants() {
    return inhabitants;
}

std::string City::getMayor() {
    return mayor;
}

double City::getArea() {
    return area;
}

void City::print() {
    std::cout << "City: " << getName() << std::endl;
    std::cout << "Inhabitants: " << getInhabitants() << std::endl;
    std::cout << "Mayor: " << getMayor() << std::endl;
    std::cout << "Area: " << getArea() << " km^2" << std::endl;
}