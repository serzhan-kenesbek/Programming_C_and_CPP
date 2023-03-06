/*
CH-230-A
a10_p7.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
	Naive string: the goal is to illustrate how copy constructors 
	should be handled. See also charbuffer.cpp
*/

class NaiveString {
private:
	char *str;
public:
	NaiveString(const char*);
	NaiveString(const NaiveString&);
	void update(char, char);
	void print();
    // Destructor
    ~NaiveString();
};

NaiveString::NaiveString(const char* t) {
	str = new char[strlen(t) + 1];
	strcpy(str, t);
    cout << "Constructor with one parameter called" << endl;
}

/* 
	Copy constructor: creates a new instance of 
	naive string starting from an existing one 
*/


NaiveString::NaiveString(const NaiveString& src) {
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
    cout << "Copy constructor called" << endl;
	// please note that we can access src.str even if it is private
	// as we are inside the NaiveString class
}

/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar) {
	unsigned int i;
	for (i = 0; i < strlen(str); i++) 
		if (str[i] == oldchar)
			str[i] = newchar;
}

void NaiveString::print() {
	cout << str << endl;
}

void funcByVal(NaiveString s) {
	cout << "funcByVal() being called" << endl;
	s.update('B', 'C');
	s.print();
}

void funcByRef(NaiveString &s) {
    cout << "funcByRef() being called" << endl;
	s.update('a', 'B');
	s.update('B', 'K');
	s.print();
}

NaiveString::~NaiveString() {
	cout << "Destructor called" << endl;
    delete [] str;
}

int main(int argc, char** argv)
{
	NaiveString a("aBcBdB");
	a.print();

	cout << "About to call funcByVal()" << endl;
	funcByVal(a);
	a.print();
    cout << endl;

    // calling the copy constructor
    NaiveString b(a);
    b.print();

	cout << "About to call funcByRef()" << endl;
    funcByRef(b);
	b.print();
    cout << endl;

	return 0;
}