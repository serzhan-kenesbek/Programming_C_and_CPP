/*
CH-230-A
a13_p5.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
using namespace std;

/*
    Error: default constructor for D tries to call a default constructor
    for A but it does not exist.

    1) First solution is to create a default constructor for D which
    calls a constructors of classes from its inheritance tree (either
    A(parameter), B() or A(parameter), C()). Since there is no default
    constructor for A class, parametrized constructor is called instead.

    2) The easier solution is to create a default constructor for class A.
*/

class A
{
    int x;

public:
    A(int i) { x = i; }
    void print() { cout << x; }
};

class B : virtual public A
{
public:
    B() : A(10) {}
};

class C : virtual public A
{
public:
    C() : A(10) {}
};

class D : public B, public C
{
    public:
        D() : A(10), B() {}
};

int main()
{
    D d;
    d.print();
    return 0;
}