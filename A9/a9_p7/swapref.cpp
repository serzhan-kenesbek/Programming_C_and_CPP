/*
CH-230-A
a9_p7.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>

using namespace std;

void swapping(int &a, int &b) { // using & for reference
    int buf = a;
    a = b;
    b = buf;
} // swap ints

void swapping(float &a, float &b) { // using & for reference
    float buf = a;
    a = b;
    b = buf;
} // swap floats

void swapping(const char* &a, const char* &b) { // references to pointers
    const char *buf = a;
    a = b;
    b = buf;
} // swap char pointers

int main(void) {
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    return 0;
}