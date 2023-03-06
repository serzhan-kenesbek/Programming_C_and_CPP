/*
CH-230-A
a3_p1.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>

int main() {
    float x;
    int n;
    // Reading the input
    scanf("%f", &x);
    scanf("%d", &n);
    // A while loop for invalid input
    while(n <= 0){
        printf("Input is invalid, reenter value\n");
        scanf("%d", &n);
    }
    /* A while loop which prints the number
    n times */
    for(int i = 0; i < n; i++){
        printf("%f\n", x);
    }
    return 0;
}