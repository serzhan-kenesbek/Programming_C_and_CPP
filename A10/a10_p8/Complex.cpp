/*
CH-230-A
a10_p8.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/


#include <iostream>
#include "Complex.h"

using namespace std;

// default constructor
Complex::Complex():
real(0), imaginary(0)
{

}

// constructor with 2 parameters
Complex::Complex(double r, double i):
real(r), imaginary(i)
{

}

// copy constructor
Complex::Complex(Complex &c)
{
    real = c.real;
    imaginary = c.imaginary;
}

// empty destructor
Complex::~Complex(){

}

// setters for data members
void Complex::set_real(double newreal) {
    real = newreal;
}

void Complex::set_imaginary(double newimaginary) {
    imaginary = newimaginary;
}

// getters for data members
double Complex::get_real() {
    return real;
}

double Complex::get_imaginary() {
    return imaginary;
}

// method for addition between complex numbers
Complex Complex::add(Complex &c) {
    Complex result;
    result.set_real(get_real() + c.get_real());
    result.set_imaginary(get_imaginary() + c.get_imaginary());
    return result;
}

// method for subtraction between complex numbers
Complex Complex::subtract(Complex &c) {
    Complex result;
    result.set_real(get_real() - c.get_real());
    result.set_imaginary(get_imaginary() - c.get_imaginary());
    return result;
}

// method for multiplication between complex numbers
Complex Complex::multiply(Complex &c) {
    Complex result;
    result.set_real(get_real() * c.get_real());
    result.set_imaginary(get_imaginary() * c.get_imaginary());
    return result;
}

// method for finding the conjugate of the complex number
Complex Complex::conjugation() {
    Complex result;
    result.set_real(get_real());
    result.set_imaginary(get_imaginary() * (-1));
    return result;
}

// print the complex number
void Complex::print() {
    // adding a space between the sign and the real part
    if (get_real() >= 0) {
        cout << get_real();
    }
    else {
        cout << "- " << get_real() * (-1);
    }

    // adding the sign between the real part and the imaginary part
    if (get_imaginary() > 0) {
        cout << " + " << get_imaginary() << "i" << endl;
    }
    // imaginary part is 0
    else if(get_imaginary() == 0) {
        cout << " + " << "i" << endl;
    }
    else {
        cout << " - " << get_imaginary() * (-1) << "i" << endl;
    }
}


