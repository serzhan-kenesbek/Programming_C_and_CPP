/*
CH-230-A
a5_p6.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int count (float *arr) {
    // Pointer to the first element of the array
    float *first_element = arr;
    // Loop for finding first negative value
    // After the loop arr will point to the element before
    // the first negative value
    while (1) {
        if (*arr < 0) {
            break;
        }
        arr++;
    }
    // Returning the number of elements between the first
    // element of the array and the first negative value
    return arr - first_element;
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
    int elements = count(arr);
    printf("Before the first negative value: %i elements\n", elements);
    free(arr);
    return 0;
}