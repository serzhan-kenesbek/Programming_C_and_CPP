/*
CH-230-A
a5_p9.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// Function for reading the elements into a 3d array
void input_elements(int ***arr, int r, int c, int d) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            for (int k = 0; k < d; k++) {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
}

// Function for printing out the 2d sections of the 3d array
void print_2d_matrices(int ***arr, int r, int c, int d) {
    for (int k = 0; k < d; k++) {
        printf("Section %i:\n", k + 1);
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                printf("%i ", arr[i][j][k]);
            }
            printf("\n");
        }
    }
}

int main() {
    int ***arr, r, c, d;

    // Input
    scanf("%d", &r);
    scanf("%d", &c);
    scanf("%d", &d);

    // Dynamic memory allocation of a 3D array
    arr = (int ***) malloc(sizeof(int**) * r);
    if (arr == NULL) {
        exit(1);
    }
    for (int i = 0; i < r; i++) {
        arr[i] = (int **) malloc(sizeof(int*) * c);
        if (arr[i] == NULL) {
            exit(1);
        }
        for (int j = 0; j < c; j++) {
            arr[i][j] = (int *) malloc(sizeof(int) * d);
            if (arr[i][j] == NULL) {
                exit(1);
            }
        }
    }

    // Function calls
    input_elements(arr, r, c, d);
    print_2d_matrices(arr, r, c, d);

    // Deallocation
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < r; j++) {
            free(arr[i][j]);
        }
        free(arr[i]);
    }
    free(arr);
    return 0;
}