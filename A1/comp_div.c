/*
CH-230-A
a1_p1.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>

int main() {
    double result; /* The result of our calculation */
    result = (3 + 1) / 5.0;
    /* At first the result is 0.000 because all of the numbers in the computation are integers and the output is also an integer, but it contains .000 because we are printing out a double. 
       To get a correct result we need to change one of the numbers in the computation into a double. In my case I changed a 5 into a 5.0 */
    printf("The value of 4/5 is %lf\n", result);
    return 0;
}