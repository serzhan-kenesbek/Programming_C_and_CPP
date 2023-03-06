/*
CH-230-A
a12_p2.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#ifndef __TOURNAMENTMEMBER_H
#define __TOURNAMENTMEMBER_H

#include <string.h>

class TournamentMember {
    private:
        char firstname[36];
        char lastname[36];
        char birthdate[11];
        char role[36];
        double height;
        static std::string location;
    public:
        // constructors
        TournamentMember();
        TournamentMember(char [], char [], char [], char[], double);
        TournamentMember(const TournamentMember &);

        // destructor
        ~TournamentMember();

        // inline getter methods
        const char *getFirstName() const {return firstname;}
        const char *getLastName() const {return lastname;}
        const char *getBirthDate() const {return birthdate;}
        const char *getRole() const {return role;}
        double getHeight() const {return height;}

        // inline setter methods
        void setFirstName(char *newf) {strcpy(firstname, newf);}
        void setLastName(char *newl) {strcpy(lastname, newl);}
        void setBirthDate(char *newb) {strcpy(birthdate, newb);}
        void setRole(char *newr) {strcpy(role, newr);}
        void setHeight(double height) {this->height = height;}

        // additional methods
        void print();
        static void ChangeLocation(const std::string);
};

#endif