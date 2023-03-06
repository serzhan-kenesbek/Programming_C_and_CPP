/*
CH-230-A
a4_p1.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    float x, upper_l, step_size;

    // Input
    scanf("%f", &x);
    scanf("%f", &upper_l);
    scanf("%f", &step_size);

    // A for loop for printing the table
    for (float i = x; i <= upper_l; i += step_size){
        printf("%f %f %f\n", i, i * i * M_PI, 2 * M_PI * i);
    }

    return 0;
}