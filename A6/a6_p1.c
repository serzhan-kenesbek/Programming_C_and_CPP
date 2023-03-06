/*
CH-230-A
a6_p1.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
// the function creates a variable of the same type and uses 
// it to swap the two variables
#define swap(a, b, type) ({ \
        type buf; \
        buf = a; \
        a = b; \
        b = buf; \
    })

int main() {
    int i1, i2;
    double d1, d2;
    // Input
    scanf("%d", &i1);
    scanf("%d", &i2);
    scanf("%lf", &d1);
    scanf("%lf", &d2);
    // Function calls
    swap(i1, i2, int);
    swap(d1, d2, double);
    // Output
    printf("After swapping:\n");
    printf("%i\n%i\n%.6lf\n%.6lf\n", i1, i2, d1, d2);
    return 0;
}