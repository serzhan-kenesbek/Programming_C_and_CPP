/*
CH-230-A
a2_p4.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>

int main() {
    float a, b, h;
    /* input */
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &h);
    /* computing the area of a square, rectangle, triangle, and trapezoid */
    float square_a = a * a;
    float rectangle_a = a * b;
    float triangle_a = (a * h) / 2;
    float trapezoid_a = h * 0.5 * (a + b);
    /* printing out the areas */
    printf("square area=%f\n", square_a);
    printf("rectangle area=%f\n", rectangle_a);
    printf("triangle area=%f\n", triangle_a);
    printf("trapezoid area=%f\n", trapezoid_a);
    return 0;
}