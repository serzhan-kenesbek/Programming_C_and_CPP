/*
CH-230-A
a11_p1.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

using namespace std;

int main(int argc, char** argv) {
    // number of boxes
    int n;
    cout << "Enter the number of boxes: ";
    cin >> n;

    // variables for input
    double height, width, depth;

    // dynamically allocating memory for 2 * n boxes
    Box *b = new Box[2 * n];

    // setting data members for the box array from input
    for (int i = 0; i < n; i++) {
        cout << "Type the height of Box " << i + 1 << ": ";
        cin >> height;
        b[i].setHeight(height);
        cout << "Type the width of Box " << i + 1 << ": ";
        cin >> width;
        b[i].setWidth(width);
        cout << "Type the depth of Box " << i + 1 << ": ";
        cin >> depth;
        b[i].setDepth(depth);
        cout << endl;
    }

    // using a copy constructor on the rest of the boxes
    for (int i = n; i < (2 * n); i++) {
        b[i] = b[i - n ];
    }

    // printing the volume of boxes using a method
    for (int i = 0; i < (2 * n); i++) {
        b[i].printVolume(i + 1, n);
    }
    
    // deallocating the array of Boxes
    delete [] b;

    return 0;
}