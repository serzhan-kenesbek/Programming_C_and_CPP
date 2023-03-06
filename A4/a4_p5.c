/*
CH-230-A
a4_p5.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_consonants(char str[]) {
    int counter = 0;
    char *ptr = str;
    while (1) {
        // Break from the loop at the end of the string
        if (*ptr == '\n') {
            break;
        }
        // Changing letters into lower case
        // to lower the amount of comparisons
        // tolower is a ctype.h library function
        char c = tolower(*ptr);
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
        // Visiting the next element of the array
        // using pointer arithmetics
        ptr++;
    }
    return counter;
}

int main() {
    char str[100];
    int cons;
    // a while loop which inputs strings
    // but breaks when the string is empty
    while(1) {
        fgets(str, sizeof(str), stdin);
        if (str[0] == '\n') {
            break;
        }
        cons = count_consonants(str);
        printf("Number of consonants=%i\n", cons);
    }
    return 0;
}