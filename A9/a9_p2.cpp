/*
CH-230-A
a9_p2.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include <string>
// unnecessary to prefix std:: before functions
using namespace std;

int main() {
    int n;
    double x;
    string s;
    // input
    cin >> n;
    cin >> x;
    cin >> s;
    // output
    for (int i = 0; i < n; i++) {
        cout << s << ":" << x << endl;
    }
    return 0;
}