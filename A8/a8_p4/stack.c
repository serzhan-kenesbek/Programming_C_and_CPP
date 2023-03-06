/*
CH-230-A
stack.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include "stack.h"
#include <stdio.h>
#include <stdbool.h>

struct stack s;

void push(unsigned int input) {
    // informational message for stack overflow
    if (s.count == 12) {
        printf("Stack Overflow");
    }
    // pushing an element to the stack
    else {
        s.count++;
        s.array[s.count - 1] = input;
    }
}

// prints the elements of the stack
void prints() {
    if (s.count == 0) {
        return;
    }
    unsigned int i = s.count - 1;
    while (i != -1) {
        printf("%d", s.array[i]);
        i--;
    }
}