/*
CH-230-A
a12_p4.[c or cpp or h]
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