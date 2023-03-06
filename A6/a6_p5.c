/*
CH-230-A
a6_p5.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>

void backwards_binary(int i) {
    // variable first_one is used to skip the leading zeroes
    // and find the index for the first one
    int bit, first_one = 0;

    // loop for skipping the leading zeros
    // 8 is the max number of bits in an unsigned char
    // so we move the mask by 7 at max
    int j = 7;
    while (first_one == 0 && j >= 0) {
        // 1 << j is a mask which together with and operator can be
        // used to get the masked bit
        if ((i & (1 << j)) > 0) {
            first_one = j;
        }
        j--;
    }

    // loop for the output
    for (int j = 0; j <= first_one; j++) {
        // using the mask and the right shift operator for the bits
        bit = (i & (1 << j)) >> j;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    unsigned char c;
    scanf("%c", &c);
    printf("The decimal representation is: %i\n", c);
    printf("The backwards binary representation is: ");
    backwards_binary(c);
    return 0;
}