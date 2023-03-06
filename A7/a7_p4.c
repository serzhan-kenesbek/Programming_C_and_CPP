/*
CH-230-A
a7_p4.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

// visits characters in a string and changes to uppercase
void print_uppercase(char input[]) {
    for (int i = 0; input[i] != '\n'; i++) {
        printf("%c", toupper(input[i]));
    }
    printf("\n");
}

// visits characters in a string and changes to lowercase
void print_lowercase(char input[]) {
    for (int i = 0; input[i] != '\n'; i++) {
        printf("%c", tolower(input[i]));
    }
    printf("\n");
}

// changes uppercase letters to lowercase and lowercase letters to uppercase
void print_switch(char input[]) {
    // visiting and changing 
    for (int i = 0; input[i] != '\n'; i++) {
        if (islower(input[i])) {
            printf("%c", toupper(input[i]));
        }
        else {
            printf("%c", tolower(input[i]));
        }
    }
    printf("\n");
}

// function for exiting the problem
void exit_loop(char input[]) {
    exit(0);
}

int main() {
    char input[100];
    int i;
    void (*print_string[4]) (char []) = {print_uppercase, print_lowercase, print_switch, exit_loop};
    fgets(input, sizeof(input), stdin);
    // loop for input
    while (1) {
        scanf("%d", &i);
        // i - 1 because of the indexing
        print_string[i - 1] (input);
    }
    return 0;
}