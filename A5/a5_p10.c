/*
CH-230-A
a5_p10.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>

// Recursive function for printing numbers counting down
void print_recursively(int n) {
    // Case for n = 1
    if (n == 1) {
        printf("1.\n");
    }
    else {
        printf("%i,", n);
        // Function calling itself
        print_recursively(n - 1);
    }
}

int main() {
    int n;
    // Input
    scanf("%i", &n);
    // Function call
    print_recursively(n);
    return 0;
}