/*
CH-230-A
a4_p2.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char line[50];
    // Input the string
    fgets(line, sizeof(line), stdin);
    int length = strlen(line);
    // Replacing the last \n character
    // with null termination character
    line[length - 1] = '\0';
    // A loop that prints each character
    for (int i = 0; i < strlen(line); i++) {
        // Printing the necessary spaces
        if ((i + 1) % 2 == 0) {
            printf(" ");
        }
        printf("%c\n", line[i]);
    }
    return 0;
}