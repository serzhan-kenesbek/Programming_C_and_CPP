/*
CH-230-A
a13_p3.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
    // input number of files to be read
    int n;
    cin >> n;
    
    // array for filenames
    string filename[n];

    // file declaration
    ofstream output("concatn.txt");
    ifstream input;

    if (!output.good()) {
        cerr << "Error opening the output file" << endl;
        exit(1);
    }

    // concatenate n files
    for (int i = 0; i < n; i++) {
        cin >> filename[i];

        // open file in binary
        input.open(filename[i], ios::binary);

        if (!input.good()) {
            cerr << "Error opening the input file" << endl;
            exit(1);
        }

        // length of the file
        input.seekg(0, ios::end);
        int length = input.tellg();

        // moving back to the beginning of the file
        input.seekg(0, ios::beg);

        // buffer array
        char buffer[length];

        // reading and writing binary file
        input.read(buffer, length);
        output.write(buffer, length);

        // skip the last newline
        if (!(i == n - 1)) {
            output << endl;
        }

        // close input file
        input.close();
    }

    // close output file
    output.close();
    
    return 0;
}