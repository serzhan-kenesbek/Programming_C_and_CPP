/*
CH-230-A
a8_p8.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[30];
    scanf("%s", filename);
    // Open the input file
    FILE *inputf = fopen(filename, "r");
    if (inputf == NULL) {
        printf("Some error occured\n");
        exit(1);
    }
    int wordcounter = 0;
    char c;
    // a variable to skip the seperations
    int occured = 0;
    do {
        c = getc(inputf);
        // counts words
        if ((c == ' ' || c == ',' || c == '?' || c == '!' ||
        c == '.' || c == '\t' || c == '\r' || c == '\n') && 
        (occured == 0)) {
            wordcounter++;
            occured = 1;
        }
        // finds the beggining of the next word
        else if (!(c == ' ' || c == ',' || c == '?' || c == '!' ||
        c == '.' || c == '\t' || c == '\r' || c == '\n') && 
        (occured == 1)) {
            occured = 0;
        }
    } while (c != EOF);
    // output
    printf("The file contains %d words\n", wordcounter);
    // closing the file
    fclose(inputf);
    return 0;
}