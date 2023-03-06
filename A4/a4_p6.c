/*
CH-230-A
a4_p6.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printing_ints(int dyn_arr[], int n) {
    int  max1, max2, buff;
    max1 = dyn_arr[0];
    max2 = dyn_arr[1];
    // Swapping using buff variable
    if (max1 > max2) {
        buff = max2;
        max2 = max1;
        max1 = buff;
    }
    // Finding the two greatest values
    for (int i = 2; i < n; i++) {
        // A case of the element being larger than max
        if (dyn_arr[i] > max2) {
            max1 = max2;
            max2 = dyn_arr[i];
        }
        // A case of the element being smaller than
        // max but larger than the second max
        else if (dyn_arr[i] >= max1 && dyn_arr[i] != max2) {
            max1 = dyn_arr[i];
        }
    }
    // Printing out the greatest values
    printf("The greatest values are: %i and %i\n", max2, max1);
}

int main() {
    int n;
    int *dyn_arr;
    printf("Number of elements: ");
    scanf("%d", &n);
    // Dynamically allocating memory
    dyn_arr = (int *) malloc(sizeof(int) * n);
    // Checking if malloc returned a valid pointer
    if (dyn_arr == NULL) {
        exit(1);
    }
    // Reading the elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &dyn_arr[i]);
    }
    printing_ints(dyn_arr, n);
    // Freeing dynamically allocated memory
    free(dyn_arr);
    return 0;
}