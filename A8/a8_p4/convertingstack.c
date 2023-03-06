/*
CH-230-A
convertingstack.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include "stack.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    unsigned int input, remainder;

    // Input
    scanf("%d", &input);

    printf("The binary representation of %d is ", input);
    // Converting into binary and storing in the stack
    while (1) {
        remainder = input % 2;
        push(remainder);

        // pushing elements until input is 0
        if (input / 2 != 0) {
            input = input / 2;
        }
        else {
            break;
        }
    }
    // printing the stack
    prints();
    printf(".\n");
    return 0;
}