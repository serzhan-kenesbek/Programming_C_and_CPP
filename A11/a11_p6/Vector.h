/*
CH-230-A
a11_p6.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

class Vector {
    private:
        int size;
        double *p;
    public:
        // constructors
        Vector();
        Vector(int, double *);
        Vector(const Vector &);

        // destructor
        ~Vector();

        // getters
        int getSize() const;
        double *getp() const;

        // setters
        void setSize(const int newsize);
        void setp(double *newp);

        // other methods
        Vector sum(const Vector &) const;
        Vector difference(const Vector &) const;
        double scalarproduct(const Vector &) const;
        double norm() const;

        // print method
        void print();
};
