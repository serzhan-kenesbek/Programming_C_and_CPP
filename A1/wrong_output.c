/*
CH-230-A
a1_p1.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>

int main() {
    int result; /* The result of our calculation */
    result = (2 + 7) * 9 / 3;
    printf("The result is %d\n", result);
    /* The reason for the error is that it is implied in printf that an integer needs to be printed, but the variable name is missing.
       For this reason we add a coma and the result variable */
    return 0;
}