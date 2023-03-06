/*
CH-230-A
a4_p10.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

// Changed the names to stay in the 80 character limit
void compute(float a, float b, float *p, float *d, float *pwr, float *invb) {
    *p = a * b;
    *d = a / b;
    // Finding the power a ^ b using the pow function from
    // math.h library
    *pwr = pow(a, b);
    *invb = 1 / b;
}

int main() {
    float a, b, prod, div, pwr, invb;
    // Input
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    // Passing by reference
    compute(a, b, &prod, &div, &pwr, &invb);
    // Output
    printf("Product: %f\n", prod);
    printf("Division: %f\n", div);
    printf("a ^ b: %f\n", pwr);
    printf("1 / b: %f\n", invb);
    return 0;
}