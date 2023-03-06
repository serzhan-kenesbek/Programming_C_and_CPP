/*
CH-230-A
a2_p5.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("Value of a=%i\n", a);
    // declaring and initializing the pointer
    int *ptr_a = &a;
    // printing the address contained in the pointer
    printf("Address of a=%p\n", ptr_a);
    // increasing the value by dereferencing
    *ptr_a += 5;
    printf("Modified value of a=%i\n", a);
    printf("Modified address of a=%p\n", ptr_a);
    return 0;
}