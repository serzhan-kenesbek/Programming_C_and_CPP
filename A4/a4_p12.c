/*
CH-230-A
a4_p12.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

void replaceAll (char *str, char c, char e) {
    int length = strlen(str);
    // A for loop which visits the characters
    // in the string and compares them
    for (int i = 0; i < length; i++) {
        // Replacing the characters which
        // fit the requirements
        if (str[i] == c) {
            str[i] = e;
        }
    }
}

int main() {
    while (1) {
        char str[80], c1, c2;
        // Reading the string
        fgets(str, sizeof(str), stdin);
        // Replacing the newline character with
        // null termination character
        str[strlen(str) - 1] = '\0';
        // Ending the loop when the input string
        // is "stop"
        if (strcmp(str, "stop") == 0) {
            break;
        }
        // Input
        scanf("%c1", &c1);
        getchar();
        scanf("%c2", &c2);
        getchar();
        // Output
        printf("character replaced: %c\n", c1);
        printf("replacing character: %c\n", c2);
        printf("string before: %s\n", str);
        // Calling the function
        replaceAll(str, c1, c2);
        printf("string after: %s\n", str);
    }
    return 0;
}