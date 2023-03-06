/*
CH-230-A
a3_p8.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>

// Function for computing the sum
float sum(float x[], int l){
    float s = 0;
    for(int i=0; i < l; i++){
        s += x[i];
    }
    return s; 
}

// Function for computing the average
float avg(float x[], int l){
    // Finding the sum by calling the sum function
    float s = sum(x, l);
    return s / l; 
}

int main() {
    float x[10], input;
    // Variable l is for the amount of floats
    int l = 0;
    // A while loop for the input
    while(l != 10){
        scanf("%f", &input);
        // An if statement which checks the validity
        // of the data
        if(input == -99){
            break;
        }
        x[l] = input;
        l++;
    }
    printf("sum = %f\n", sum(x, l));
    printf("average = %f\n", avg(x, l));
    return 0;
}