/*
CH-230-A
a11_p6.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include <math.h>
#include "Vector.h"

using namespace std;

// constructors
Vector::Vector() :
size(0)
{
    p = NULL;
}

Vector::Vector(int newsize, double *newp) :
size(newsize)
{
    // dynamic memory allocation
    p = new double[newsize];

    // copying the values
    for (int i = 0; i < newsize; i++) {
        p[i] = newp[i];
    }
}

Vector::Vector(const Vector &v) {
    size = v.size;
    
    // dynamic memory allocation
    p = new double[v.size];

    // copying the values from the memory location
    for (int i = 0; i < v.size; i++) {
        p[i] = v.p[i];
    }
}

// destructor
Vector::~Vector() {
    // deallocating memory
    delete [] p;
}

// getters
int Vector::getSize() const {
    return size;
}

double *Vector::getp() const {
    return p;
}

// setters
void Vector::setSize(const int newsize) {
    size = newsize;
}

void Vector::setp(double *newp) {
    p = newp;
}

Vector Vector::sum(const Vector &v) const {
    double *d = new double[v.getSize()];
    Vector result(getSize(), d);
    // add the vectors and store the result
    for (int i = 0; i < v.getSize(); i++) {
        result.getp()[i] = getp()[i] + v.getp()[i];
    }
    delete [] d;
    return result;
}

Vector Vector::difference(const Vector &v) const {
    double *d = new double[v.getSize()];
    Vector result(getSize(), d);
    // subtract the vectors and store the result
    for (int i = 0; i < v.getSize(); i++) {
        result.getp()[i] = getp()[i] - v.getp()[i];
    }
    delete [] d;
    return result;
}

double Vector::scalarproduct(const Vector &v) const {
    double result = 0;
    // summing the multiplications of vector components
    for (int i = 0; i < v.getSize(); i++) {
        result += getp()[i] * v.getp()[i];
    }
    return result;
}

double Vector::norm() const {
    double sum = 0, result;
    // summing the squares of vector components
    for (int i = 0; i < getSize(); i++) {
        sum += getp()[i] * getp()[i];
    }
    // finding the square root
    result = sqrt(sum);
    return result;
}

// print method
void Vector::print() {
    for(int i = 0; i < getSize(); i++) {
        cout << p[i] << " ";
    }
    cout << endl;
}
