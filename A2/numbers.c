/*
CH-230-A
a2_p2.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    /* changing the format specifiers when printing */
    printf("character=%c\n", c);
    printf("decimal=%d\n", c); 
    printf("octal=%o\n", c);
    printf("hexadecimal=%x\n", c);
    return 0;
}