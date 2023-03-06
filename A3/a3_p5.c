/*
CH-230-A
a3_p5.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>

int main() {
    char c;
    int n;
    double sum = 0, avg;
    double val[100], f;
    scanf("%c", &c);
    scanf("%d", &n);
    /* Reading the temperatures n times and 
    storing them in an array using a loop */
    for(int i = 0; i < n; i++){
        scanf("%lf", &val[i]); 
    }
    /* a switch statement for different cases
    of the character c */
    switch (c) {
        case 's':
            /* Finding the sum of the temperatures 
            using for loop */
            for(int i = 0; i < n; i++){
                sum += val[i];  
            }
            printf("sum: %lf\n", sum);
            break;
        case 'p':
            printf("the list: ");
            /* Printing out temperatures */
            for(int i = 0; i < n; i++){
                printf("%lf\n", val[i]);
            }
            break;
        case 't':
            /* Printing out the converted 
            temperatures in the form of the list */
            printf("the list in Fahrenheit: \n");
            for(int i = 0; i < n; i++){
                f = val[i] * 9 / 5 + 32;
                printf("%lf\n", f);
            }
            break;
        default:
            /* Finding the average of the
            temperatures by dividing the sum
            with n */
            for(int i = 0; i < n; i++){
                sum += val[i];
            }
            avg = sum / n;
            printf("average: %lf\n", avg);
    }
    return 0;
}   