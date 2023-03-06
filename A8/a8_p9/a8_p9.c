/*
CH-230-A
a8_p9.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    char filename[30];
    // buffer
    char buffer[64];
    // output file
    FILE *outputf = fopen("output.txt", "wb");
    if (outputf == NULL) {
        printf("Some error occured\n");
        exit(1);
    }
    // concatenating n files
    for (int i = 0; i < n; i++) {
        scanf("%s", filename);
        // input file
        FILE *inputf = fopen(filename, "rb"); 
        if (inputf == NULL) {
            printf("Some error occured\n");
            exit(1);
        }
        // reading and writing
        while (fread(buffer, sizeof(char), 1, inputf)) {
            fwrite(buffer, sizeof(char), 1, outputf);
        }
        // seperating files
        fprintf(outputf, "\n");
        // closing the input files
        fclose(inputf);
    }
    // closing the output file
    fclose(outputf);
    return 0;
}