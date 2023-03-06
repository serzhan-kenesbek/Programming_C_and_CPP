/*
CH-230-A
a10_p8.[c or cpp or h]
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

        // method for print
        void print();
};