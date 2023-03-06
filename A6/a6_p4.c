/*
CH-230-A
a6_p4.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>

void scalar_product(int x[], int y[], int dimensions) {
    int i_results[dimensions], scalar = 0; 

    // Computing the intermediate results and the scalar product
    for (int i = 0; i < dimensions; i++) { 
        i_results[i] = x[i] * y[i]; 
        scalar += i_results[i]; 
    } 

    // Conditional compilation
    #ifdef INTERMEDIATE
    printf("The intermediate product values are:\n");
    // Printing out the intermediat results
    for(int i = 0; i < dimensions; i++) {
        printf("%i\n", i_results[i]);
    }
    #endif

    // The scalar product
    printf("The scalar product is: %i\n", scalar);
}

int main() {
    int dimensions;

    // Input
    scanf("%d", &dimensions);
    int x[dimensions], y[dimensions];
    for (int i = 0; i < dimensions; i++) {
        scanf("%d", &x[i]);
    }
    for (int i = 0; i < dimensions; i++) {
        scanf("%d", &y[i]);
    }
    
    // Function call
    scalar_product(x, y, dimensions);
    return 0;
}