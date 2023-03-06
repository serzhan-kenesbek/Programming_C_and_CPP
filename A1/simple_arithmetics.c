/*
CH-230-A
a1_p1.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>

int main() {
    int x = 17, y = 4;
    printf("x=%d\ny=%d\n", x, y);
    printf("sum=%d\n", x + y);
    printf("product=%d\n", x * y);
    printf("difference=%d\n", x - y);
    printf("division=%lf\n", (x + 0.0) / y);
    printf("remainder of division=%d\n", x % y);
    return 0;
}