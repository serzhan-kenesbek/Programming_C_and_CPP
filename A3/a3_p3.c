/*
CH-230-A
a3_p3.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>

float convert(int cm) {
    /* Divding the variable by 100000.0 to convert it
    into km and then returning the value */
    return cm / 100000.0;
}

int main() {
    int cm;
    scanf("%d", &cm);
    /* Conversion from int to float using
    a function */
    float km = convert(cm);
    printf("Result of conversion: %f\n", km);
    return 0;
}