/*
CH-230-A
a11_p1.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

using namespace std;

class Box {
    private:
        double height;
        double width;
        double depth;
    public:
        // constructors
        Box();
        Box(double, double, double);
        Box(const Box&);
        ~Box();

        // setters
        void setHeight(double newheight);
        void setWidth(double newWidth);
        void setDepth(double newDepth);

        // getters
        double getHeight();
        double getWidth();
        double getDepth();

        // print volume of a box
        void printVolume(int i, int n);
};