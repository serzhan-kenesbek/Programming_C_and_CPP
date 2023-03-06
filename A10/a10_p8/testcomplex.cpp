/*
CH-230-A
a10_p8.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/


#include <iostream>
#include "Complex.h"

using namespace std;

int main(int argc, char **argv) {
    // Tests for each operation and constructor
    cout << "Tests:" << endl;
    cout << "Default constructor" << endl;
    Complex c1;
    c1.print();
    cout << endl;

    cout << "Constructor with two parameters" << endl;
    Complex c2(10, -5.5);
    c2.print();
    cout << endl;

    cout << "Copy constructor" << endl;
    Complex c3(c2);
    c3.print();
    cout << endl;

    cout << "Conjugate" << endl;
    Complex c4;
    c4 = c3.conjugation();
    c4.print();
    cout << endl;

    cout << "Addition" << endl;
    Complex c5(5, -5);
    Complex c6(-3, 5);
    Complex c7;
    c7 = c5.add(c6);
    c7.print();
    cout << endl;

    cout << "Subtraction" << endl;
    Complex c8(-2, 2);
    Complex c9(5, 4);
    Complex c10;
    c10 = c9.subtract(c8);
    c10.print();
    cout << endl;

    cout << "Multiplication" << endl;
    Complex c11(7, 0);
    Complex c12(2, 5);
    Complex c13;
    c13 = c11.multiply(c12);
    c13.print();

    return 0;
}