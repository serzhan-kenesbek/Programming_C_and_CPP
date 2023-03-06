/*
CH-230-A
a2_p10.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>

int main() {
    /* i is an index necessary for the loop. 
    We set it to zero so we can print the 
    text at n */
    int n=-1, i=0;
    /* a while loop which continues until 
    n entered is valid */
    while(n <= 0){
        scanf("%d", &n);
    }
    /* A while loop that visits and prints
    at all numbers from 1 to n */
    while(i != n){
        i++;
        printf("%i days = %i hours\n", i, i * 24);
    }
    return 0;
}