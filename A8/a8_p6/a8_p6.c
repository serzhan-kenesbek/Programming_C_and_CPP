/*
CH-230-A
a8_p6.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double sum_doubles(double d1, double d2) {
    return d1 + d2;
}

double difference_doubles(double d1, double d2) {
    return d1 - d2;
}

double product_doubles(double d1, double d2) {
    return d1 * d2;
}

double division_doubles(double d1, double d2) {
    return d1 / d2;
}

int main() {
    // Input
    double d1, d2;
    char fname1[20], fname2[20];
    scanf("%s", fname1);
    scanf("%s", fname2);
    // Concat .txt to file names
    strcat(fname1, ".txt");
    strcat(fname2, ".txt");

    // Opening the files
    FILE *inputf1, *inputf2, *outputf;
    inputf1 = fopen(fname1, "r");
    inputf2 = fopen(fname2, "r");
    if (inputf1 == NULL || inputf2 == NULL) {
        printf("Some error occured!\n");
        exit(1);
    }

    // Reading the two doubles
    fscanf(inputf1, "%lf", &d1);
    fscanf(inputf2, "%lf", &d2);

    // Output into the seperate file
    outputf = fopen("results.txt", "w");
    if (outputf == NULL) {
        printf("Some error occured!\n");
        exit(1);
    }

    // Function calls
    double sum = sum_doubles(d1, d2);
    double difference = difference_doubles(d1, d2);
    double product = product_doubles(d1, d2);
    double division = division_doubles(d1, d2);

    // Output into the files
    fprintf(outputf, "sum of the two doubles: %lf\n", sum);
    fprintf(outputf, "difference of the two doubles: %lf\n", difference);
    fprintf(outputf, "product of the two doubles: %lf\n", product);
    fprintf(outputf, "division of the two doubles: %lf\n", division);

    // Closing the files
    fclose(inputf1);
    fclose(inputf2);
    return 0;
}