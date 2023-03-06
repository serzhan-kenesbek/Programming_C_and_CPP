/*
CH-230-A
a6_p7.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>

void set3bits(int i, int bit1, int bit2, int bit3) {
    // binary representation
    printf("The binary representation is: ");
    int bit;

    // A loop with decrementation which starts at the leftmost bit
    for (int j = 7; j >= 0; j--) {
        // 1 << j is a mask which together with and operator can be
        // used to get the masked bit
        // using right shift operator we can get the necessary bit
        bit = ((i & (1 << j)) >> j);
        printf("%d", bit);
    }
    printf("\n");

    // setting the 3 bits and printing again
    printf("After setting the bits: ");
    for (int j = 7; j >= 0; j--) {
        if (j == bit1 || j == bit2 || j == bit3) {
            printf("1");
        }
        else {
            bit = ((i & (1 << j)) >> j);
            printf("%d", bit);
        }
    }
    printf("\n");
}

int main() {
    unsigned char c;
    int bit1, bit2, bit3;
    // Input
    scanf("%c", &c);
    scanf("%i", &bit1);
    scanf("%i", &bit2);
    scanf("%i", &bit3);
    // Output
    printf("The decimal representation is: %i\n", c);
    // Function call
    set3bits(c, bit1, bit2, bit3);
    return 0;
}