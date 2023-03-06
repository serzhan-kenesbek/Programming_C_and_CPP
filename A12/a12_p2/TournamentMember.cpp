/*
CH-230-A
a12_p2.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include <string.h>
#include "TournamentMember.h"

using namespace std;

// initializing a static attribute of class Tournament Member
string TournamentMember::location = "Bremen";

// Default constructor
TournamentMember::TournamentMember() :
height(0)
{
    strcpy(firstname, "defaultfirstname");
    strcpy(lastname, "defaultlastname");
    strcpy(birthdate, "yyyy-mm-dd");
    strcpy(role, "no role");
    cout << "Default constructor called" << endl;
}

// Copy constructor
TournamentMember::TournamentMember(const TournamentMember &tm)
{
    strcpy(firstname, tm.getFirstName());
    strcpy(lastname, tm.getLastName());
    strcpy(birthdate, tm.getBirthDate());
    strcpy(role, tm.getRole());
    height = tm.getHeight();
    cout << "Copy constructor called" << endl;
}

// parametrized constructor
TournamentMember::TournamentMember(char nf[], char nl[]
, char nb[], char nr[], double nheight) :
height(nheight)
{
    strcpy(firstname, nf);
    strcpy(lastname, nl);
    strcpy(birthdate, nb);
    strcpy(role, nr);
    cout << "Parametrized constructor called" << endl;
}

// destructor
TournamentMember::~TournamentMember()
{
    cout << "Destructor called" << endl;
}

// additional methods
void TournamentMember::print() {
    cout << "Firstname: " << getFirstName() << endl 
    << "Lastname: " << getLastName() << endl
    << "Birth Date: " << getBirthDate() << endl
    << "Role: " << getRole() << endl
    << "Height: " << getHeight() << endl
    <<  "Location: " << TournamentMember::location << endl;
}

void TournamentMember::ChangeLocation(const std::string newl) {
    location = newl;
}
