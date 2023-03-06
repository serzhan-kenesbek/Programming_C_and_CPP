/*
CH-230-A
a6_p6.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>

void backwards_binary(int i) {
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
}

int main() {
    unsigned char c;
    // Input
    scanf("%c", &c);
    // Output
    printf("The decimal representation is: %i\n", c);
    printf("The binary representation is: ");
    // Function call
    backwards_binary(c);
    return 0;
}