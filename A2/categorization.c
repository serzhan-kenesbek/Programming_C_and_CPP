/*
CH-230-A
a2_p9.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    /* Checking if c is a lower or upper case character
    using ASCII values */
    if((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A')){
        printf("%c is a letter\n", c);
    }
    /* Checking if c is a digit using ASCII values */
    else if(c >= '0' && c <= '9'){
        printf("%c is a digit\n", c);
    }
    // Output for when c is any other symbol
    else {
        printf("%c is some other symbol\n", c);
    }
    return 0;
}