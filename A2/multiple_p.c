/*
CH-230-A
a2_p6.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>

int main() {
    double x, y;
    scanf("%lf", &x);
    scanf("%lf", &y);
    double *ptr_one, *ptr_two, *ptr_three;
    ptr_one = ptr_two = &x;
    ptr_three = &y;
    /* a conditional statement to show that
    ptr_one and ptr_two have same address */
    if(ptr_one == ptr_two){
        printf("ptr_one and ptr_two: %p\n", ptr_one);
        /* since address in ptr_one and ptr_two are equal,
        i compared ptr_three with ptr_one */
        if(ptr_one != ptr_three){
            /* output is short to avoid 60 char limit */
            printf("ptr_three: %p\n", ptr_three);
        }
    }
    return 0;
}