/*
CH-230-A
a5_p3.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>

// A function that counts the number of lower
// case characters in a function
int count_lower(char* str) {
    int counter = 0;
    // A loop which visits the characters 
    // in a string using pointer arithmetics
    while (*str != '\0') {
        // Searching for lowercase characters
        if (*str >= 'a' && *str <= 'z') {
            counter++;
        }
        str++;
    }
    return counter;
}

int main() {
    int counter;
    char line[50];
    // A loop for input continues until the string is empty
    while (1) {
        // String input
        fgets(line, sizeof(line), stdin);
        // The loop breaks when the input string is empty
        if (line[0] == '\n') {
            break;
        }
        // Function call
        counter = count_lower(line);
        printf("number of lowercase characters: %i\n", counter);
    }
    return 0;
}