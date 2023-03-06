/*
CH-230-A
a4_p11.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int count_insensitive(char *str, char c) {
    int occurs = 0, length;
    length = strlen(str);
    // Visiting the characters in the string
    for (int i = 0; i < length; i++) {
        // Counting in the case insensitive manner
        // using the tolower function
        if (tolower(str[i]) == tolower(c)) {
            occurs++;
        }
    }
    return occurs;
}

int main() {
    char *str, *str_r;
    int length, occurs;
    // Dynamic memory allocation of the string
    // with max size 50
    str = (char *) malloc(sizeof(char) * 50);
    fgets(str, 50 * sizeof(str), stdin);
    // Length of the input string
    length = strlen(str);
    // Dynamic memory allocation for the string
    // with the right size
    str_r = (char *) malloc(sizeof(char) * length);
    // Copying the string into the new string
    strcpy(str_r, str);
    // Deallocating memory occupied by the 
    // first string
    free(str);
    // Output
    occurs = count_insensitive(str_r, 'b');
    printf("The character 'b' occurs %i times.\n", occurs);
    occurs = count_insensitive(str_r, 'H');
    printf("The character 'H' occurs %i times.\n", occurs);
    occurs = count_insensitive(str_r, '8');
    printf("The character '8' occurs %i times.\n", occurs);
    occurs = count_insensitive(str_r, 'u');
    printf("The character 'u' occurs %i times.\n", occurs);
    occurs = count_insensitive(str_r, '$');
    printf("The character '$' occurs %i times.\n", occurs);
    // Deallocating memory occupied by the
    // final string
    free(str_r);
    return 0;
}