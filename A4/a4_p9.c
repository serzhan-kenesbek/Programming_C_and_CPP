/*
CH-230-A
a4_p9.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int prodminmax(int arr[], int n) {
    int min = arr[0], max = arr[1], buff;
    // Swapping min max using variable buff
    if (min > max) {
        buff = min;
        min = max;
        max = buff;
    }
    // Searching for min and max ints using
    // a for loop
    for (int i = 2; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        else if (arr[i] < min) {
            min = arr[i];
        }
    }
    // returning the product of min and max
    return min * max;
}

int main() {
    int n, *arr, product;
    scanf("%d", &n);
    // Dynamic memory allocation
    arr = (int *) malloc(sizeof(int) * n);
    // Checking if malloc returned a valid pointer
    if (arr == NULL) {
        exit(1);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Finding the product using prodminmax
    // function
    product = prodminmax(arr, n);
    printf("Product of the smallest and largest element: %i\n", product);
    // Freeing allocated memory
    free(arr);
    return 0;
}