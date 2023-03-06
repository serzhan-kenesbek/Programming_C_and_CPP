/*
CH-230-A
a10_p2.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
    std::string name;
    int hunger;
    int boredom;
    double height;
    // two new additional properties
    double width;
    double weight;
 
public: // business logic methods are public
    // setter methods
    void setName(std::string& newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
 
    // getter method
    int getHunger();
 
    // service method
    void print();
 
    // getter and setter methods for new properties
    void setWidth(double width);
    void setWeight(double weight);
    double getWidth();
    double getWeight();
};