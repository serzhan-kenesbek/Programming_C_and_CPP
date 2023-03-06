/*
CH-230-A
a3_p7.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>

void print_form(int n, int m, char c){
    // A Nested Loop
    /* An outer loop which is responsible
    for the rows */
    for(int l = m; l <= m + n - 1; l++){
        /* The inner loop responsible
        for the characters in the rows */
        for(int j = 0; j < l; j++){
            printf("%c", c);
        }
        printf("\n");
    }
}

int main() {
    int n, m;
    char c;
    scanf("%d", &n);
    /* Making sure that new line 
    character is not read */
    getchar();
    scanf("%d", &m);
    getchar();
    scanf("%c", &c);
    print_form(n, m, c);
    return 0;
}