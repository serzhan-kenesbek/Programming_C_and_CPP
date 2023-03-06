/*
CH-230-A
a5_p4.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// Function divides each element of the array by 5
void divby5(float arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] / 5;
    }
}

int main() {
    int n;
    float *arr;
    // Input
    scanf("%i", &n);
    arr = (float *) malloc(sizeof(float) * n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }
    // Function call
    divby5(arr, n);
    printf("After:\n");
    // Array after the function call
    for (int i = 0; i < n; i++) {
        // Printing with decimal precision
        printf("%.3f ", arr[i]);
    }
    printf("\n");
    // Deallocation
    free(arr);
    return 0;
}