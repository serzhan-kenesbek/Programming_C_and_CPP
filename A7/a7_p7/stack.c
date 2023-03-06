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

void push(int input) {
    // informational message for stack overflow
    if (s.count == 12) {
        printf("Stack Overflow");
    }
    // pushing an element to the stack
    else {
        s.count++;
        s.array[s.count - 1] = input;
        printf("%d", input);
    }
}

void pop() {
    // informational message for stack underflow
    if (isEmpty() == 1) {
        printf("Stack Underflow");
    }
    // popping an element from the stack
    else {
        printf("%d", s.array[s.count - 1]);
        s.count--;
    }
}

// emptying the stack
void empty() {
    printf("Emptying Stack ");
    while (isEmpty() == 0) {
        pop();
        printf(" ");
    }
}

// checks if stack is empty
_Bool isEmpty() {
    return s.count == 0;
}