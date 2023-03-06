/*
CH-230-A
a5_p5.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// A function finds the product between each pair of vectors
// and then sums them to find the scalar product
double scalar_product(double *v, double *w, int n) {
    int i = 0;
    double product = 0, sum = 0;
    while (i != n) {
        // Finding the product using dereferencing
        product = (*v) * (*w);
        // Finding the sum of all the products
        sum += product;
        i++;
        // Pointer arithmetics
        v++;
        w++;
    }
    // Returning the result
    return sum;
}

// Function visits and compares each component of the 
// vector using a for loop to find the smallest component
void smallest(double *vector, int n) {
    double min = *vector;
    int position = 0;
    for (int i = 1; i < n; i++) {
        if (vector[i] < min) {
            min = vector[i];
            position = i;
        }
    }
    // Output
    printf("The smallest = %lf\n", min);
    printf("Position of smallest = %i\n", position);
}

// Function visits and compares each component of the 
// vector using a for loop to find the largest component
void largest(double *vector, int n) {
    double max = *vector;
    int position = 0;
    for (int i = 1; i < n; i++) {
        if (vector[i] > max) {
            max = vector[i];
            position = i;
        }
    }
    // Output
    printf("The largest = %lf\n", max);
    printf("Position of largest = %i\n", position);
}

int main() {
    int n;
    scanf("%d", &n);
    double *v, *w, scalarproduct;
    // Dynamic memory allocation for vectors v, w
    v = (double *) malloc(sizeof(double) * n);
    w= (double *) malloc(sizeof(double) * n);
    // Input of the vector components
    for (int i = 0; i < n; i++) {
        scanf("%lf", &v[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%lf", &w[i]);
    }
    // Scalar product
    scalarproduct = scalar_product(v, w, n);
    printf("Scalar product=%lf\n", scalarproduct);
    // Finding largest and smallest components in each vector
    smallest(v, n);
    largest(v, n);
    smallest(w, n);
    largest(w, n);
    // Deallocation
    free(v);
    free(w);
    return 0;
}