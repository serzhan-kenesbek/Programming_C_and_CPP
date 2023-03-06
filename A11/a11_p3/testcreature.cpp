/*
CH-230-A
a11_p3.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"

using namespace std;

int main(int argc, char **argv) {
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Pegasus.\n";
    Pegasus p;
    p.run();
    p.jump();

    cout << "\nCreating a Griffon.\n";
    Griffon g;
    g.run();
    g.fly();

    cout << endl;

    return 0;
}