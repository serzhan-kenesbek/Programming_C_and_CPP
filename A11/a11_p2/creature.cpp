/*
CH-230-A
a11_p2.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/


#include <iostream>

using namespace std;

class Creature {
	public:
		Creature();  
        ~Creature();
		void run() const;

	protected:
		int distance;
};

Creature::Creature(): distance(10)
{
    cout << "default constructor for Creature called\n";
}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

class Wizard : public Creature {
	public:
		Wizard();
        ~Wizard();
		void hover() const;

	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3)
{
    cout << "default constructor for Wizard called\n";
}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

// 1st new subclass
class Pegasus : public Creature {
    private:
        int height;
    public:
        Pegasus();
        ~Pegasus();
        void jump() const;
};

Pegasus::Pegasus() : height(5)
{
    cout << "default constructor for Pegasus called\n";
}

void Pegasus::jump() const 
{
    cout << "jump distance " << (height * distance) << " meters!\n";
}

// 2nd new subclass
class Griffon : public Creature {
    private:
        int wingpower;
    public:
        Griffon();
        ~Griffon();
        void fly() const;
};

Griffon::Griffon() : wingpower(7)
{
    cout << "default constructor for Griffon called\n";
}

void Griffon::fly() const 
{
    cout << "flying distance " << (wingpower * distance) << " meters!\n";
}

// destructors
Creature::~Creature()
{
    cout << "destructor for Creature called\n";
}

Wizard::~Wizard()
{
    cout << "destructor for Wizard called\n";
}

Pegasus::~Pegasus()
{
    cout << "destructor for Pegasus called\n";
}

Griffon::~Griffon()
{
    cout << "destructor for Griffon called\n";
}

int main()
{ 
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Pegasus.\n";
    Pegasus p;
    p.run();
    p.jump();

    cout << "\nCreating a Griffon.\n";
    Griffon g;
    g.run();
    g.fly();

    cout << endl;

    return 0;
} 