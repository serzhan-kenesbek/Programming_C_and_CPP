/*
CH-230-A
a9_p8.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
// unnecessary to prefix std::
using namespace std;

void subtract_max(int *array, int n) {
    int max = *array;
    // finding the max
    for (int i = 1; i < n; i++) {
        if (*(array + i) > max) {
            max = *(array + i);
        }
    }

    // subtracting max from all elements
    for (int i = 0; i < n; i++) {
        *(array + i) -= max;
    }
}

// deallocating memory
void deallocate(int *array) {
    delete [] array;
}

int main() {
    int n;
    cin >> n;

    // allocating memory
    int *array = new int[n];

    // input
    for (int i = 0; i < n; i++) {
        cin >> *(array + i);
    }

    // print array before subtract
    for (int i = 0; i < n; i++) {
        cout << *(array + i) << " ";
    }
    cout << endl;

    subtract_max(array, n);

    // print array after subtract
    for (int i = 0; i < n; i++) {
        cout << *(array + i) << " ";
    }
    cout << endl;

    // deallocation
    deallocate(array);

    return 0;
}