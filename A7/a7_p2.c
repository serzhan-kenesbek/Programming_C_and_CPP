/*
CH-230-A
a7_p2.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    char data;
    struct node *prev;
    struct node *next;
};

struct node *push_front(struct node *my_list, char i_char) {
    // New node
    struct node *new_e = (struct node *) malloc(sizeof(struct node));
    if (new_e == NULL) {
        printf("Error allocating memory\n");
        return my_list;
    }
    new_e->data = i_char;

    // Inserting at the beginning
    new_e->prev = NULL;
    new_e->next = my_list;
    if (my_list != NULL) {
    my_list->prev = new_e;
    }
    my_list = new_e;

    return my_list;
}

struct node *remove_char(struct node *my_list, char i_char) {
    if (my_list == NULL) {
        return my_list;
    }
    struct node *current = my_list;
    struct node *next;
    int deleted = 0;
    // a loop for traversal and deletion
    while (current != NULL) {
        if (current->data == i_char) {
            next = current->next;
            // head node is the same as the current element
            if (my_list == current) {
                my_list = current->next;
            }
            // when the next element is not pointing to NULL
            if (current->next != NULL) {
                current->next->prev = current->prev;
            }
            // when the previous element is not pointing to NULL
            if (current->prev != NULL) {
                current->prev->next = current->next;
            }
            // deleting the element
            free(current);
            current = next;
            deleted = 1;
        }
        else {
            current = current->next;
        }
    }

    // element is not in the list if it was not deleted
    if (deleted == 0) {
        printf("The element is not in the list!\n");
    }
    return my_list;
}

void print_list(struct node *my_list) {
    // traversing and printing the list
    struct node *cursor = my_list;
    while (cursor != NULL) {
        printf("%c ", cursor->data);
        cursor = cursor->next;
    }
    printf("\n");
}

// printing the list backwards using recursion
void print_list_backwards(struct node *my_list) {
    if (my_list != NULL) {
        print_list_backwards(my_list->next);
        printf("%c ", my_list->data);
    }
}

void empty_list(struct node *my_list) {
    struct node *cursor;
    while (my_list != NULL) {
        cursor = my_list;
        my_list = my_list->next;
        free(cursor);
    }
}

int main() {
    int input;
    char c;
    struct node *my_list = (struct node *) malloc(sizeof(struct node));
    my_list = NULL;
    // loop for input
    do {
        scanf("%d", &input);
        getchar();
        // deciding which action to take
        switch (input) 
        {
            // adding to the beginning
            case 1:
                scanf("%c", &c);
                getchar();
                my_list = push_front(my_list, c);
                break;
            // removing all elements with the character
            case 2:
                scanf("%c", &c);
                getchar();
                my_list = remove_char(my_list, c);
                break;
            // print current list
            case 3:
                print_list(my_list);
                break;
            // print list backwards
            case 4:
                print_list_backwards(my_list);
                printf("\n");
                break;
            // empty the list
            case 5:
                empty_list(my_list);
                break;
        }
    } while (input != 5); // quit the execution
    return 0;
}