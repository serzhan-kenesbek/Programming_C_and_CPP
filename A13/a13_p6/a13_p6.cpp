/*
CH-230-A
a13_p6.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include <vector>

int main(int argc, char** argv) {
    std::vector<int> v(20, 8);

    // try and catch block
    try {
        // access the 21st element of the vector
        v.at(20);
    }
    // catching a reference of type out_of_range thrown by .at() 
    catch (std::out_of_range &exception) {
        std::cerr << "An out of range exception of " << 
        exception.what() << std::endl;
    }
    
    return 0;
}