/*
CH-230-A
a12_p2.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"

using namespace std;

int main(int argc, char **argv) {
    // creating a class object using the default constructor
    TournamentMember t1;
    t1.print();
    cout << endl;

    // creating a class object using the parametrized constructor
    char firstname1[36] = "Serzhan";
    char lastname1[36] = "Kenesbek";
    char birthdate1[11] = "2003-03-24";
    char role1[36] = "forward";
    TournamentMember t2(firstname1, lastname1, birthdate1, role1, 175.5);
    t2.print();
    cout << endl;

    // creating a class object using the copy constructor
    TournamentMember t3(t2);
    t3.print();
    cout << endl;

    // changing the location using a static method
    string newl = "Hamburg";
    TournamentMember::ChangeLocation(newl);

    // output after changing the location
    t1.print();
    cout << endl;
    t2.print();
    cout << endl;

    return 0;
}