/*
CH-230-A
a4_p7.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void printing_matrix(int arr[30][30], int n) {
    printf("The entered matrix is:\n");
    // A nested for loop for printing
    // the 2D array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void print_under_diag(int arr[30][30], int n) {
    printf("Under the main diagonal:\n");
    // A nested for loop which prints elements
    // under the main diagonal
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Printing elements with index
            // for the row higher than the
            // column
            if (i > j) {
                printf("%d ", arr[i][j]);
            }
        }
    }
    printf("\n");
}

int main() {
    int arr[30][30], n;
    // Reading the number of rows and columns
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    // Function calls
    printing_matrix(arr, n);
    print_under_diag(arr, n);
    return 0;
}