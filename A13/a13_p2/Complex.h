/*
CH-230-A
a13_p2.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

using namespace std;

class Complex {
    private:
        double real;
        double imaginary;
    public:
        // constructors
        Complex();
        Complex(double, double);
        Complex(Complex& c);
        ~Complex();

        // setter methods
        void set_real(double newreal);
        void set_imaginary(double newimaginary);

        // getter methods
        double get_real();
        double get_imaginary();

        // methods for operations and conjugation
        Complex add(Complex &c);
        Complex subtract(Complex &c);
        Complex multiply(Complex &c);
        Complex conjugation();

        // overloaded operators
        Complex operator+(const Complex &c);
        Complex operator-(const Complex &c);
        Complex operator*(const Complex &c);
        Complex& operator=(const Complex &c);
        friend ostream &operator<<(ostream &out, const Complex &c);
        friend istream &operator>>(istream &in, Complex &c);
};