/*
CH-230-A
a12_p5.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;

	// Implement GCD of two numbers;

	return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

void Fraction::print()
{
	std::cout << num << "/" << den << std::endl;
}

// overload output
std::ostream& operator<<(std::ostream& out, const Fraction &f) {
	out << f.num << "/" << f.den;
	return out;
}

// overload input
std::istream& operator>>(std::istream& in, Fraction &f) {
	in >> f.num >> f.den;
	// denominator cannot be 0 so the input is taken again
	while (f.den == 0) {
		std::cout << "the denominator cannot be 0: ";
		in >> f.den;
	}
	return in;
}

// overload multiplication
Fraction Fraction::operator*(const Fraction &f) {
	Fraction result;
	result.num = this->num * f.num;
	result.den = this->den * f.den;
	return result;
}

// overload division
Fraction Fraction::operator/(const Fraction &f) {
	Fraction result;
	result.num = this->num * f.den;
	result.den = this->den * f.num;
	return result;
}

// overload addition
Fraction Fraction::operator+(const Fraction &f) {
	// lowest common multiple
	int r_lcm = lcm(this->den, f.den);

	// two parts of the denominator
	int leftpart = (this->num * r_lcm) / this->den;
	int rightpart = (f.num * r_lcm) / f.den;

	// creating a new instance of Fraction for the result
	Fraction result(leftpart + rightpart, r_lcm);
	return result;
}

// overload difference
Fraction Fraction::operator-(const Fraction &f) {
	// lowest common multiple
	int r_lcm = lcm(this->den, f.den);

	// two parts of the denominator
	int leftpart = (this->num * r_lcm) / this->den;
	int rightpart = (f.num * r_lcm) / f.den;

	// creating a new instance of Fraction for the result
	Fraction result(leftpart - rightpart, r_lcm);
	return result;
}

// assignment operator
Fraction& Fraction::operator=(const Fraction &f) {
	this->num = f.num;
	this->den = f.den;
	return *this; // return a reference to the current instance
}

// comparison operators
bool operator>(Fraction &f1, Fraction &f2) {
	return ((f1 - f2).num > 0);
}

bool operator<(Fraction &f1, Fraction &f2) {
	return ((f2 - f1).num > 0);
}