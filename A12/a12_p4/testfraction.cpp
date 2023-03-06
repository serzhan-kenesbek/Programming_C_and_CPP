/*
CH-230-A
a12_p4.[c or cpp or h]
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

    cout << "Multiplication of two inputs: " << endl;
    cout << d * e << endl;;

    cout << "Divison of two inputs: " << endl;
    cout << d / e << endl;;
}