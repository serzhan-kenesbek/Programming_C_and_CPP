/*
CH-230-A
a3_p2.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>

int main() {
    char ch;
    int n, i = 0;;
    scanf("%c", &ch);
    scanf("%d", &n);
    /* A while loop for printing the characters 
    until n */ 
    while(i <= n){
        printf("%c", ch - i);
        /* A conditional statement used in order
        to skip the last comma */ 
        if(i == n){
            printf("\n");
            break;
        }
        printf(", ");
        i++;
    }
    return 0;
}