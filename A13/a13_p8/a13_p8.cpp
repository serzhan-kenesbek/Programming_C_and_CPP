/*
CH-230-A
a13_p8.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>

/* ---- Classes ---- */

class Motor {
    public:
        Motor() {
            // exception thrown from Motor
            throw "This motor has problems";
        }
};

class Car {
    public:
        Car() {
            // Initialize object of class Motor
            Motor m;
        }
};

class Garage {
    public:
        Garage() {
            // try catch block for initializing the car with broken motor
            try {
                Car c;
            }
            // catching the exception from the Motor constructor
            catch (char const *c) {
                throw "The car in this garage has problems with its motor";
            }
        }
};

int main(int argc, char** argv) {
    // try catch block for catching the exception from Garage constructor
    try {
        Garage g;
    }
    catch (char const *c) {
        std::cerr << c << std::endl;
    }
    return 0;
}