/*
CH-230-A
a9_p3.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
// unnecessary to prefix std::
using namespace std;

// find the absolute value
float absolute(float input) {
    if (input >= 0) {
        return input;
    }
    else {
        return -input;
    }
}

int main() {
    float input;
    // input
    cin >> input;
    // output
    cout << absolute(input) << endl;
    return 0;
}