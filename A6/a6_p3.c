/*
CH-230-A
a6_p3.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
// macros for min and max of 2 integers to make it easier to
// find the min and max of 3
#define min_2(a, b) ((a < b) ? (a) : (b))
#define max_2(a, b) ((a > b) ? (a) : (b))
// macros for finding min and max of 3 integers
#define min(a, b, c) ((min_2(a, b) < c) ? (min_2(a, b)) : (c))
#define max(a, b, c) ((max_2(a, b) > c) ? (max_2(a, b)) : (c))
// macro for finding the mid-range
#define mid_range(a, b, c) (((float) (min(a, b, c) + max(a, b, c))) / 2)
int main() {
    int a, b, c;
    // Input
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    float midr = mid_range(a, b, c);
    // Output
    printf("The mid-range is: %.6f\n", midr);
    return 0;
}