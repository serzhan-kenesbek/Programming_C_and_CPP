/*
CH-230-A
a11_p6.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include "Vector.h"

int main(int argc, char **argv) {
    // constructor tests
    Vector v1;
    std::cout << "Vector 1 created using the default constructor: ";
    v1.print();

    int size2 = 3;
    double *p = new double[size2];
    for (int i = 0; i < size2; i++) {
        p[i] = i + 2;
    }
    Vector v2(size2, p);
    std::cout << "Vector 2 created using parametric constructor: ";
    v2.print();

    Vector v3 = v2;
    std::cout << "Vector 3 a copy of Vector 2: ";
    v3.print();

    int size4 = 3;
    double *p2 = new double[size4];
    for (int i = 0; i < size4; i++) {
        p2[i] = i * i;
    }
    Vector v4(size4, p2);
    std::cout << "Vector 4 created using parametric constructor: ";
    v4.print();

    // method calls
    std::cout << std::endl;
    std::cout << "norm of Vector 2: ";
    std::cout << v2.norm() << std::endl;

    std::cout << "scalar product of Vectors 2 and 4: ";
    std::cout << v2.scalarproduct(v4) << std::endl;

    std::cout << "sum of Vectors 2 and 4: ";
    (v2.sum(v4)).print();

    std::cout << "difference of Vectors 2 and 4: ";
    (v2.difference(v4)).print();

    delete [] p;
    delete [] p2;

    return 0;
}