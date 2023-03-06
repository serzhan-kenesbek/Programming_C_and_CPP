/*
CH-230-A
a3_p6.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>

float to_pounds(int kg, int g){
    /* Returning the converted mass. Type needs to be converted to float in
    the calculations */
    return (float) kg * 2.2 + (float) g * 0.0022;
}

int main() {
    int kg, g;
    scanf("%d", &kg);
    scanf("%d", &g);
    printf("Result of conversion: %f\n", to_pounds(kg, g));
    return 0;
}