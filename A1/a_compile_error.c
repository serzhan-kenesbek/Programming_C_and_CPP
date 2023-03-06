/*
CH-230-A
a1_p1.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h> 
/* the # is missing */

int main() {
    float result; /* The result of the division */
    int a = 5;
    float b = 13.5; 
    /* trying to assign a decimal to an integer. Replaced an int with float */
    result = a / b;
    printf("The result is %f\n", result); 
    /* d is the format specifier for an integer, but the variable result is a float. Replaced it with %f */
    return 0;
}