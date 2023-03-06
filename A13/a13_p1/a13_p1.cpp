/*
CH-230-A
a13_p1.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main(int argc, char **argv) {
    string name, extension, newname;
    cin >> name;
    bool isExtension = 0;

    // name of the copy file
    for (char &c : name) {
        if (c == '.') {
            newname += "_copy";
            extension += c;
            isExtension = 1;
        }
        else if (isExtension == 0) {
            newname += c;
        }
        else if (isExtension == 1) {
            extension += c;
        }
    }

    newname = newname + extension;

    ifstream input(name); // read from a file
    if (!input.good()) {
        cerr << "Error opening input file" << endl;
        exit(1);
    }

    ofstream output(newname); // output to a file
    if (!output.good()) {
        cerr << "Error opening output file" << endl;
        exit(1);
    }

    // string for input
    string line;

    // loop for file input and output
    while(getline(input, line)) {
        output << line << endl;
    }

    // close files
    input.close();
    output.close();

    return 0;
}