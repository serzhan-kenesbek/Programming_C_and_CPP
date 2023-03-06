/*
CH-230-A
a5_p7.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char *str3;
    // Dynamic memory allocation
    str3 = (char *) malloc(sizeof(char) * (strlen(str1) + strlen(str2)));
    fgets(str1, sizeof(str1), stdin);
    // Removing newline character from the string
    str1[strlen(str1) - 1] = '\0';
    fgets(str2, sizeof(str2), stdin);
    // Removing newline character from the string
    str2[strlen(str2) - 1] = '\0';
    // Concatenating both strings
    strcat(str3, str1);
    strcat(str3, str2);
    printf("Result of concatenation: %s\n", str3);
    // Deallocation
    free(str3);
    return 0;
}