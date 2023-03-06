/*
CH-230-A
a9_p6.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
// unnecessary to prefix std::
using namespace std;

int myfirst(int a[], size_t arraysize) {
    for (size_t i = 0; i < arraysize; i++) {
        // return a first postiive even number
        if ((a[i] > 0) && (a[i] % 2 == 0)) {
            return a[i];
        }
    }
    return -1;
}

double myfirst(double d[], size_t arraysize) {
    for (size_t i = 0; i < arraysize; i++) {
        // return the first negative number with no fraction
        if ((d[i] < 0) && (d[i] == (int)d[i])) {
            return d[i];
        }
    }
    return -1.1;
}

char myfirst(char c[], size_t arraysize) {
    bool isVowel;
    char buf;
    for (size_t i = 0; i < arraysize; i++) {
        // check if character is a letter
        if (isalpha(c[i])) {
            // change to lowercase
            buf = tolower(c[i]);
            isVowel = (buf == 'a' || buf == 'e' 
            || buf == 'i' || buf == 'o' || buf == 'u');
            // return if it is consonant
            if (!isVowel) {
                return c[i];
            }
        }
    }
    return '0';
}

int main() {
    // initializing arrays
    int a[] = {-2, -3, 2, -4, 7, 8};
    double d[] = {1.0, 2.0, 5.6, -2.0, -2.1, 10};
    char c[] = {'-', '4', 'l', 'o', '6', '7'};
    // array size
    size_t arraysize = sizeof(a) / sizeof(a[0]);
    // output and function calls
    cout << "Output for the array of integers: " << myfirst(a, arraysize) << endl;
    arraysize = sizeof(d) / sizeof(d[0]);
    cout << "Output for the array of doubles: " << myfirst(d, arraysize) << endl;
    arraysize = sizeof(c) / sizeof(c[0]);
    cout << "Output for the array of chars: " << myfirst(c, arraysize) << endl;
    return 0;
}