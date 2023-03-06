/*
CH-230-A
a3_p10.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>

// A function that returns the product
// of the two float values
float product(float a, float b){
    return a * b;
}

// A void function returns the product by reference
void productbyref(float a, float b, float *p){
    *p = a * b;
}

// A void function returns the changes made to
// float numbers by reference
void modifybyref(float *a, float *b){
    *a = *a + 3;
    *b = *b + 11;
}

int main() {
    float a, b, p;
    scanf("%f", &a);
    scanf("%f", &b);
    productbyref(a, b, &p);
    // Comparing the results for two functions
    if(product(a, b) == p){
        printf("Result for the first two functions is the same\n");
    }
    modifybyref(&a, &b);
    printf("a is now %lf, and b is now %lf\n", a, b);
    return 0;
}