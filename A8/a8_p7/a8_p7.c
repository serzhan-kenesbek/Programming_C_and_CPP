/*
CH-230-A
a8_p7.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // opening the files
    FILE *inputf1, *inputf2;
    inputf1 = fopen("text1.txt", "r");
    inputf2 = fopen("text2.txt", "r");
    FILE *outputf = fopen("merge12.txt", "w");
    if (inputf1 == NULL || inputf2 == NULL || outputf == NULL) {
        printf("Some error occured!\n");
        exit(1);
    }
    char c;
    // reading and printing the content of the files into another file
    while ((c = fgetc(inputf1)) != EOF) {
        fputc(c, outputf);
    }
    while ((c = fgetc(inputf2)) != EOF) {
        fputc(c, outputf);
    }
    // closing the files
    fclose(inputf1);
    fclose(inputf2);
    fclose(outputf);
    return 0;
}