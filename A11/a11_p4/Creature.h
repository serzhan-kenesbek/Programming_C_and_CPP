/*
CH-230-A
a11_p4.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

using namespace std;

// base class
class Creature {
	public:
		Creature();  
        ~Creature();
		void run() const;

	protected:
		int distance;
};

// first derived class
class Wizard : public Creature {
	public:
		Wizard();
        ~Wizard();
		void hover() const;

	private:
		int distFactor;
};

// second derived class
class Pegasus : public Creature {
    private:
        int height;
    public:
        Pegasus();
        ~Pegasus();
        void jump() const;
};

// third derived class
class Griffon : public Creature {
    private:
        int wingpower;
    public:
        Griffon();
        ~Griffon();
        void fly();
};
