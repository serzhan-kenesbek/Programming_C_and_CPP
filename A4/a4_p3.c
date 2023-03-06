/*
CH-230-A
a4_p3.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

// Function finds the product of all elements
// and then using a pow function calculates
// the geometric mean
float geometric_mean(float arr[], int num) {
    float product = 1, gmean, power = (float) 1 / num;
    for (int i = 0; i < num; i++) {
        product *= arr[i];
    }
    gmean = pow(product, power);
    return gmean;
}

// Function visits and compares all the
// elements of the array to find the
// highest number
float highest_num(float arr[], int num) {
    float max = arr[0];
    for (int i = 1; i < num; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function visits and compares all the
// elements of the array to find the
// lowest number
float lowest_num(float arr[], int num) {
    float min = arr[0];
    for (int i = 1; i < num; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Function calculates the sum
float sum(float arr[], int num) {
    float sum = 0;
    for (int i = 0; i < num; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    float a[15], input, gmean, highest, lowest, sum_all;
    char c;
    int num = 0;
    // Loop for reading the positive floats
    for (int i = 0; i < 15; i++) {
        scanf("%f", &input);
        if (input >= 0) {
            a[i] = input;
            num++;
        }
        else {
            break;
        }
    }
    getchar();
    scanf("%c", &c);
    getchar();
    // Switch statement for different input
    switch (c) {
        case 'm':
            gmean = geometric_mean(a, num);
            printf("Geometric mean: %f\n", gmean);
            break;
        case 'h': 
            highest = highest_num(a, num);
            printf("Highest number: %f\n", highest);
            break;
        case 'l':
            lowest = lowest_num(a, num);
            printf("Lowest number: %f\n", lowest);
            break;
        case 's':
            sum_all = sum(a, num);
            printf("Sum of all elements: %f\n", sum_all);
            break;
    }
    return 0;
}