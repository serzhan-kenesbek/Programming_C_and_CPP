/*
CH-230-A
a5_p1.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>

// Function for printing the triangle
void print_triangle(int n, char ch) {
    // A Nested loop with decrementation
    for (int i = n; i > 0; i--) {
        for (int j = i; j > 0; j--){
            printf("%c", ch);
        }
        printf("\n");
    }
}

int main() {
    int n;
    char ch;
    // Input
    scanf("%d", &n);
    getchar();
    scanf("%c", &ch);
    // A function call
    print_triangle(n, ch);
    return 0;
}
