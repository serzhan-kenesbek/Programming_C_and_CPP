/*
CH-230-A
a13_p4.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include<iostream>
using namespace std;

/*
    Class diagram: 
          + ------> C ---- +
        /                  \
      A ------> B --------> D

    There is multiple inheritance and the methods, attributes of 
    class A are passed to class D twice indirectly, which causes ambiguity.
     
    1) This can be solved by making the base class virtual. As a result only 
    one print() is called and it is the print of class C, because it is
    the last class to be declared as a parent of class D.

    2) Another more specific way to solve the issue is by specifying which
    derived classes print to use. This can be done using casting or
    B::print() and C::print().
*/
 
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B()  { setX(10); }
};
 
class C: virtual public A  
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;
    d.print();
    return 0;
}