/*
CH-230-A
a13_p2.[c or cpp or h]
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

// overloaded operators
ostream &operator<<(ostream &out, const Complex &c) {
    // adding a space between the sign and the real part
    if (c.real >= 0) {
        out << c.real;
    }
    else {
        out << "- " << c.real * (-1);
    }

    // adding the sign between the real part and the imaginary part
    if (c.imaginary > 0) {
        out << " + " << c.imaginary << "i" << endl;
    }
    else if(c.imaginary == 1) {
        out << " + " << "i" << endl;
    }
    else if(c.imaginary == -1) {
        out << " - " << "i" << endl;
    }
    else if(c.imaginary == 0) {
        out << endl;
    }
    else {
        out << " - " << c.imaginary * (-1) << "i" << endl;
    }
    return out;
}

istream &operator>>(istream &in, Complex &c) {
    in >> c.real >> c.imaginary;
    return in;
}

Complex Complex::operator+(const Complex &c) {
    Complex result;
    result.real = this->real + c.real;
    result.imaginary = this->imaginary + c.imaginary;
    return result;
}

Complex Complex::operator-(const Complex &c) {
    Complex result;
    result.real = this->real - c.real;
    result.imaginary = this->imaginary - c.imaginary;
    return result;
}

Complex Complex::operator*(const Complex &c) {
    Complex result;
    result.real = this->real * c.real - this->imaginary * c.imaginary; 
    result.imaginary = this->real * c.imaginary + this->imaginary * c.real;
    return result;
}

Complex& Complex::operator=(const Complex &c) {
    this->real = c.real;
    this->imaginary = c.imaginary;
    return *this;
}


