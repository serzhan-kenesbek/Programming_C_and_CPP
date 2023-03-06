/*
CH-230-A
a8_p5.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// sum of ascii values
int sum_ascii(int c1, int c2) {
    return c1 + c2;
}

int main() {
    // input
    FILE *inputfile = fopen("chars.txt", "r");
    if (inputfile == NULL) {
        printf("Some error occured!\n");
        exit(1);
    }
    char c1, c2;
    c1 = getc(inputfile);
    c2 = getc(inputfile);

    // sum of first two characters
    int sum = sum_ascii(c1, c2);
    
    // output
    FILE *outputfile = fopen("codesum.txt", "w");
    if (outputfile == NULL) {
        printf("Some error occured!\n");
        exit(1);
    }
    fprintf(outputfile, "%d", sum);

    // Closing the files
    fclose(outputfile);
    fclose(inputfile);
    return 0;
}