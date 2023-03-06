/*
CH-230-A
a3_p9.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>

double sum25(double v[], int n){
    // Calculating the sum at indexes 2 and 5
    double sum = v[2] + v[5];
    if(n < 6){
        return -111;
    }
    // Returning the sum
    return sum;
}

int main() {
    int n;
    double sum;
    scanf("%d", &n);
    // Checking the validity of positions
    if(n < 6){
        printf("One or both positions are invalid\n");
    }
    else {
        double v[n];
        // Storing the doubles in an array
        for(int i=0; i < n; i++){
            scanf("%lf", &v[i]);
        }
        sum = sum25(v, n);
        printf("sum=%lf\n", sum);
    }
    return 0;
}