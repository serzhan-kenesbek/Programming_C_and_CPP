/*
CH-230-A
a2_p1.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h> 

int main() {
    double d1, d2;
    int i1, i2, sum_i, product_i, product_ch, sum_ch;
    char c1, c2;
    scanf("%lf", &d1);
    scanf("%lf", &d2);
    scanf("%d", &i1);
    scanf("%d", &i2);
    sum_i = i1 + i2;
    product_i = i1 * i2;
    // making sure that the newline character is not read by scanf
    getchar(); 
    scanf("%c", &c1);
    getchar();
    scanf("%c", &c2);
    // converting the sum of characters to integer
    sum_ch = (int) c1 + c2; 
    // converting the product of characters to integer
    product_ch = (int) c1  * c2; 
    printf("sum of doubles=%lf\n", d1 + d2);
    printf("difference of doubles=%lf\n", d1 - d2);
    printf("square=%lf\n", d1 * d1);
    printf("sum of integers=%i\n", sum_i);
    printf("product of integers=%i\n", product_i);
    // printing the sum of characters in decimal
    printf("sum of chars=%i\n", sum_ch); 
    // printing the product of characters in decimal
    printf("product of chars=%i\n", product_ch);
    // printing the sum of characters as a characters
    printf("sum of chars=%c\n", sum_ch);
    // printing the product of characters as a characters
    printf("product of chars=%c\n", product_ch);
    return 0;
}