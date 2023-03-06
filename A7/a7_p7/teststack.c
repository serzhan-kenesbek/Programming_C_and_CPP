/*
CH-230-A
teststack.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include "stack.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    int input;
    char c;
    // infinite loop
    while(1) {
        scanf("%c", &c);
        // switch statement for input and function calls
        switch (c) {
            case 's':
                scanf("%d", &input);
                printf("Pushing ");
                push(input);
                printf("\n");
                break;
            case 'p':
                printf("Popping ");
                pop();
                printf("\n");
                break;
            case 'e':
                empty();
                printf("\n");
                break;
            case 'q':
                printf("Quit\n");
                exit(0);
        }
    }
    return 0;
}