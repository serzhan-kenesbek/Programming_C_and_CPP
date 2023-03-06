/*
CH-230-A
a5_p2.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>

// Function divides each element of the array by 5
void divby5(float arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] / 5;
    }
}

int main() {
    float arr[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    // Finding the size of the array using
    // sizeof function
    int size = sizeof(arr) / sizeof(float);
    printf("Before:\n");
    // Array before the function call
    for (int i = 0; i < size; i++) {
        // Printing with decimal precision
        printf("%.3f ", arr[i]);
    }
    printf("\n");
    // Function call
    divby5(arr, size);
    printf("After:\n");
    // Array after the function call
    for (int i = 0; i < size; i++) {
        // Printing with decimal precision
        printf("%.3f ", arr[i]);
    }
    printf("\n");
    return 0;
}