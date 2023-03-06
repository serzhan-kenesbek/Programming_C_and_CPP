/*
CH-230-A
a10_p6.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	// hunger is now stored in a percentage scale
	double hunger;
	int boredom;
	double height;
	// new property thirst
	double thirst;

	// conversion methods
	double convert_todouble(int hunger);
	int convert_toint();

public: // business logic methods are public
	// constructors
	Critter();
	Critter(std::string);
	Critter(std::string, int, int, double = 10);
	// new constructor with 5 parameters
	Critter(std::string, int, int, double, double);

	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setHeight(double newheight);
	void setThirst(double newthirst);

	// getter methods
	std::string getName();
	int getHunger();
	int getBoredom();
	double getHeight();
	double getThirst();

	// service method
	void print();
};