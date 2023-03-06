/*
CH-230-A
a5_p8.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// Functino for reading the matrix
void matrix_input(int **matrix, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function for printing the matrix
void matrix_output(int **matrix, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%i ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function for multiplying the matrices and then printing the
// resulting matrix
void multiply_matrices(int **a, int **b, int **c, int r, int n, int m) {
    // A nested loop for finding the sum of the products of 
    // the matrix elements
    for (int i = 0; i < r; i++) {
        for (int k = 0; k < n; k++) {
            for (int j = 0; j < m; j++) {
                // the product of two matrices
                c[i][k] += a[i][j] * b[j][k];
            }
        }
    }
    // A loop for printing the resultnig matrix elements
    for (int i = 0; i < r; i++) {
        for (int k = 0; k < n; k++) {
            printf("%i ", c[i][k]);
        }
        printf("\n");
    }
}

int main() {
    int n, m, p;
    int **a, **b, **c;

    // Input
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);

    // Dynamic memory allocation for three 2D arrays
    a = (int **) malloc(sizeof(int *) * n);
    if (a == NULL) {
        exit(1);
    }
    for (int i = 0; i < n; i++) {
        a[i] = (int *) malloc(sizeof(int) * m);
        if (a[i] == NULL) {
            exit(1);
        }
    }

    b = (int **) malloc(sizeof(int *) * m);
    if (b == NULL) {
        exit(1);
    }
    for (int i = 0; i < m; i++) {
        b[i] = (int *) malloc(sizeof(int) * p);
        if (b[i] == NULL) {
            exit(1);
        }
    }

    c = (int **) malloc(sizeof(int *) * n);
    if (c == NULL) {
        exit(1);
    }
    for (int i = 0; i < n; i++) {
        c[i] = (int *) malloc(sizeof(int) * p);
        if (c[i] == NULL) {
            exit(1);
        }
    }

    // Output and Function calls
    matrix_input(a, n, m);
    matrix_input(b, m, p);

    printf("Matrix A:\n");
    matrix_output(a, n, m);

    printf("Matrix B:\n");
    matrix_output(b, m, p);

    printf("The multiplication result AxB:\n");
    multiply_matrices(a, b, c, n, p, m);

    // Deallocation
    for (int i = 0; i < n; i++) {
        free(a[i]);
    }
    free(a);
    for (int i = 0; i < m; i++) {
        free(b[i]);
    }
    free(b);
    for (int i = 0; i < n; i++) {
        free(c[i]);
    }
    free(c);
    return 0;
}