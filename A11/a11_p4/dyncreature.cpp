/*
CH-230-A
a11_p4.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "Creature.h"

int main(int argc, char **argv) {
    string input;
    while (1) {
        // input
        cin >> input;

        // calls for 3 derived classes
        if (input == "wizard") {
            Wizard *w = new Wizard;
            w->run();
            w->hover();
            delete w;
            cout << endl;
        }
        else if (input == "pegasus") {
            Pegasus *p = new Pegasus;
            p->run();
            p->jump();
            delete p;
        }
        else if (input == "griffon") {
            Griffon *g = new Griffon;
            g->run();
            g->fly();
            delete g;
        }
        // stop the execution 
        else if (input == "quit") {
            break;
        }
    }
    return 0;
}