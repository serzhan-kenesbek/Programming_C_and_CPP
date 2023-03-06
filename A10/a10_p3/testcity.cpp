/*
CH-230-A
a10_p3.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include "City.h"

using namespace std;

int main(int argc, char** argv) {
    // instances of a class City
    City Bremen, Paris, London;

    // set values for data members of instances
    Bremen.setName("Bremen");
    Bremen.setInhabitants(400);
    Bremen.setMayor("Serzhan");
    Bremen.setArea(55.25);

    Paris.setName("Paris");
    Paris.setInhabitants(5746545);
    Paris.setMayor("Kenesbek");
    Paris.setArea(250.67);

    London.setName("London");
    London.setInhabitants(7500);
    London.setMayor("Zholdas");
    London.setArea(5789.45);

    // print output for 3 instances
    Bremen.print();
    cout << endl;
    Paris.print();
    cout << endl;
    London.print();

    return 0;
}