/*
CH-230-A
a6_p2.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
// as a result of the (c & 1) we will check if the least significant
// bit of the character c is 1 or 0 using ternary ?: operator
#define least_significant_bit(d) (((c & 1) == 0) ? (0) : (1))

int main() {
    unsigned char c;
    // Input
    scanf("%c", &c);
    // Output
    printf("The decimal representation is: %i\n", c);
    printf("The least significant bit is: %i\n", least_significant_bit(c));
    return 0;
}