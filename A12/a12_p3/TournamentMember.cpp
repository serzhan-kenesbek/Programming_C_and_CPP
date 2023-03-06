/*
CH-230-A
a12_p3.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include <string.h>
#include "TournamentMember.h"

using namespace std;

/*  ----- Tournament Member Class ------  */

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

/*  ----- Player Class ------  */

// Default constructor
Player::Player() :
TournamentMember(), number(0), position("no position"), goals(0), 
isRightFoot(1)
{}

// Copy Constructor
Player::Player(const Player &p) :
TournamentMember(p)
{
    this->setNumber(p.getNumber());
    this->setPosition(p.getPosition());
    this->setGoals(p.getGoals());
    this->setisRightFoot(p.getIsRightFoot());
}

// Parametrized constructor
Player::Player(char nf[], char nl[], char nb[], char nr[], double nheight, 
int nn, std::string np, int ngoals, bool nrf) :
TournamentMember(nf, nl, nb, nr, nheight), number(nn), position(np),
goals(ngoals), isRightFoot(nrf)
{}

Player::~Player()
{}

// additional methods
void Player::print() {
    this->TournamentMember::print();
    cout << "Number: " << getNumber() << endl;
    cout << "Position: " << getPosition() << endl;
    cout << "Goals: " << getGoals() << endl;
    cout << "Is left foot or right foot?: ";
    if (getIsRightFoot()) {
        cout << "right foot" << endl;
    }
    else {
        cout << "left foot" << endl;
    }
}

void Player::incrementGoals() {
    this->setGoals(getGoals() + 1);
}