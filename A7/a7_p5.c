/*
CH-230-A
a7_p5.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// comparing the elements to sort in ascending order
int ascending_comparison (const void *x, const void *y) {
    return (*(int*)x - *(int*)y);
}

// comparing the elements to sort in descending order
int descending_comparison (const void *x, const void *y) {
    return (*(int*)y - *(int*)x);
}

// sort the list ascendingly
void sort_ascending(int arr[], int n) {
    qsort(arr, n, sizeof(int), ascending_comparison);
}

// sort the list descendingly
void sort_descending(int arr[], int n) {
    qsort(arr, n, sizeof(int), descending_comparison);
}

// print the list
void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%i ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    char c;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    do {
        scanf("%c", &c);
        switch (c) {
            case 'a':
                sort_ascending(arr, n);
                print_array(arr, n);
                break;
            case 'd':
                sort_descending(arr, n);
                print_array(arr, n);
                break;
        }
    } while (c != 'e');
    return 0;
}