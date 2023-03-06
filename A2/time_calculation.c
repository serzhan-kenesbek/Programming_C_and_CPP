/*
CH-230-A
a2_p3.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h> 

int main() {
    int weeks, days, hours;
    printf("weeks=");
    scanf("%d", &weeks);
    printf("days=");
    scanf("%d", &days);
    printf("hours=");
    scanf("%d", &hours);
    // calculating the total numbers of hours
    hours += weeks * 7 * 24 + days * 24;
    printf("total number of hours=%i\n", hours);
    return 0;
}