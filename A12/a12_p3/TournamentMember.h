/*
CH-230-A
a12_p3.[c or cpp or h]
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
        static void ChangeLocation(std::string newl) {location = newl;}
};

class Player : public TournamentMember {
    private:
        int number;
        std::string position;
        int goals;
        bool isRightFoot;
    public:
        // constructors
        Player();
        Player(const Player &p);
        Player(char [], char [], char [], char[], double, int, std::string,
        int, bool);

        // destructor
        ~Player();

        // setters
        void setNumber(int newnumber) {number = newnumber;}
        void setPosition(std::string newpos) {position = newpos;}
        void setGoals(int newgoals) {goals = newgoals;}
        void setisRightFoot(bool b) {isRightFoot = b;}

        // getters
        int getNumber() const {return number;} 
        std::string getPosition() const {return position;}
        int getGoals() const {return goals;}
        bool getIsRightFoot() const {return isRightFoot;}

        // additional methods
        void print();
        void incrementGoals();
};

#endif