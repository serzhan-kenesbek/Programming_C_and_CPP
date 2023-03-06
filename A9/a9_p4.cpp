/*
CH-230-A
a9_p4.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include <string>
// unnecessary to prefix std::
using namespace std;

// number of occurences of a character
int mycount(char c, string s) {
    int occurences = 0, i = 0;
    char traversal = s[i];
    while (1) {
        // breaks the loop at the end of the string
        if (traversal == '\0') {
            break;
        }
        // increment if the character is found
        else if (traversal == c) {
            occurences++;
        }
        // next character in a string
        traversal = s[++i];
    }
    return occurences;
}

// computing the difference
int mycount(int i1, int i2) {
    return i2 - i1;
}

int main() {
    // output and function calls
    int difference = mycount(7, 3);
    cout << "The difference is " << difference << endl;
    int occurences = mycount('b', "this is a string");
    cout << "The number of occurences is " << occurences << endl;
    return 0;
}