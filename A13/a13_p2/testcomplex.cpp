/*
CH-230-A
a13_p2.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/


#include <iostream>
#include <fstream>
#include "Complex.h"

using namespace std;

int main(int argc, char **argv) {
    ifstream in1("in1.txt");
    ifstream in2("in2.txt");
    ofstream output("output.txt");

    if (!in1.good()) {
        cerr << "Error opening the input file 1" << endl;
        exit(1);
    }

    if (!in2.good()) {
        cerr << "Error opening the input file 2" << endl;
        exit(1);
    }

    if (!output.good()) {
        cerr << "Error opening the output file" << endl;
        exit(1);
    }

    Complex c1, c2;
    in1 >> c1;
    in2 >> c2;

    // addition
    output << "Test for addition: " << endl;
    cout << "Test for addition: " << endl;
    // test for assignemnt operator
    Complex c_add;
    c_add = c1 + c2;
    output << c_add << endl;
    cout << c_add << endl;

    // difference
    output << "Test for difference: " << endl;
    cout << "Test for difference: " << endl;
    output << c1 - c2 << endl;
    cout << c1 - c2 << endl;

    // multiplication
    output << "Test for multiplication: " << endl;
    cout << "Test for multiplication: " << endl;
    output << c1 * c2 << endl;
    cout << c1 * c2;

    in1.close();
    in2.close();
    output.close();

    return 0;
}