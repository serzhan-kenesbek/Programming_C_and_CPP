/*
CH-230-A
a12_p5.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
	Fraction a(4, 2);
	Fraction b(17, 11);
	Fraction c(5);

	cout << a << endl;; 
	cout << b << endl;; 
	cout << c << endl;; 

    Fraction d, e;
    cout << "Input two fractional numbers: " << endl;
    cin >> d;
    cin >> e;

    cout << "Input: " << endl;
    cout << d << endl;
    cout << e << endl;

    cout << "The greater fraction is ";
    if (d > e) {
        cout << "first one" << endl;
    }
    else if (d < e) {
        cout << "second one" << endl;
    }

    Fraction sum = d + e;
    cout << "The sum of two fractions is: " << sum << endl;

    Fraction difference = d - e;
    cout << "The difference of two fractions is: " << difference << endl;
}