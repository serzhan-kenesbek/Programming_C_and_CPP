/*
CH-230-A
a2_p8.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);
    /* A conditional statement to see if the number
    is divisible by both 2 AND 7 */
    if(input % 2 == 0 && input % 7 == 0){
        printf("The number is divisible by 2 and 7\n");
    }
    /* A conditional statement to see if the number
    is not divisible by 2 OR 7 */
    else {
        printf("The number is NOT divisible by 2 and 7\n");
    }
    return 0;
}