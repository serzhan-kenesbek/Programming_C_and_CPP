/*
CH-230-A
a10_p3.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <string> 

class City {
    private: // data members
        std::string name;
        int inhabitants;
        std::string mayor;
        double area;
    public:
        // setter methods
        void setName(std::string newname);
        void setInhabitants(int newinhabitants);
        void setMayor(std::string newmayor);
        void setArea(double newarea);
        // getter methods
        std::string getName();
        int getInhabitants();
        std::string getMayor();
        double getArea();
        // print method
        void print();
};