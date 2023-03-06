/*
CH-230-A
a4_p4.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_consonants(char str[]) {
    int length = strlen(str), counter = 0;
    char c;
    for (int i = 0; i < length; i++) {
        // Changing letters into lower case
        // to lower the amount of comparisons
        // tolower is a ctype.h library function
        c = tolower(str[i]);
        // Checking if the letter is a consonant
        if (c == 'b' || c == 'c' || 
        c == 'd' || c == 'f' || c == 'g' || 
        c == 'j' || c == 'k' || c == 'l' || 
        c == 'm' || c == 'n' || c == 'p' || c == 'q' ||
        c == 's' || c == 't' || c == 'v' || c == 'x' || 
        c == 'z' || c == 'h' || c == 'r' || c == 'w' ||
        c == 'y') {
            counter++;
        }
    }
    return counter;
}

int main() {
    char str[100];
    int cons;
    // a while loop which inputs strings
    // but breaks when the string is empty
    while (1) {
        fgets(str, sizeof(str), stdin);
        if (str[0] == '\n') {
            break;
        }
        cons = count_consonants(str);
        printf("Number of consonants=%i\n", cons);
    }
    return 0;
}