/*
CH-230-A
a3_p11.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main(){
    char one[100], two[100], third[100], c;
    // Reading the first string
    fgets(one, sizeof(one), stdin);
    // Reading the second string
    fgets(two, sizeof(two), stdin);
    // Replacing \n with null termination
    // character

    // Length of the string one at first
    int l_one_old = strlen(one);
    one[strlen(one)-1] = '\0';
    // Replacing \n with null termination
    // character
    two[strlen(two)-1] = '\0';
    // Reading the character
    scanf("%c", &c);
    // Length of the strings
    int l_one = strlen(one);
    int l_two = strlen(two);
    printf("length1=%i\n", l_one);
    printf("length2=%i\n", l_two);

    // Concatentation of string one and two
    printf("concatenation=%s\n", strcat(one, two));
    // Removing string two from the end of one
    one[l_one_old - 1] = '\0';

    // Copying string two into the third string
    strcpy(third, two);
    printf("copy=%s\n", third);

    // Conditional statements for comparing
    // strings one and two
    if(strcmp(one, two) == 0){
        printf("one is equal to two\n");
    }
    else if(strcmp(one, two) < 0){
        printf("one is smaller than two\n");
    }
    else if(strcmp(one, two) > 0){
        printf("one is larger than two\n");
    }

    // An integer to check if the char is
    // in the string
    int check = 0;
    // Visiting string two until the character 
    // needed is found
    for(int i = 0; i < strlen(two); i++){
        if(two[i] == c){
            printf("position=%i\n", i);
            check = 1;
            break;
        }
    }
    // if the variable is 0 the character is not in
    // the string
    if(check == 0){
        printf("The character is not in the string\n");
    }
    return 0;
}