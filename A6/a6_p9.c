/*
CH-230-A
a6_p9.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct list {
    int value;
    struct list *next; /* self reference */
};

// function inserts the element at the beginning
struct list *push_front(struct list *my_list, int newvalue) {
    struct list *new_e;
    // new node to be added
    new_e = (struct list *) malloc(sizeof(struct list));
    // if the memory couldn't be allocated
    if (new_e == NULL) {
        printf("Error allocating memory\n");
        return my_list;
    }
    // inserting the new node at the beginning
    new_e->value = newvalue;
    new_e->next = my_list;
    return new_e;
}

// function inserts the element at the end
struct list *push_back(struct list *my_list, int newvalue) {
    struct list *cursor, *new_e;
    // cursor is used to traverse through the linked list
    cursor = my_list;
    // new node to be added
    new_e = (struct list *) malloc(sizeof(struct list));
    if (new_e == NULL) {
        printf("Error allocating memory\n");
        return my_list;
    }
    new_e->value = newvalue;
    new_e->next = NULL;
    // if the list is empty it will only consist of the 
    // new element
    if (my_list == NULL) {
        return new_e;
    }
    // a loop for traversing through the linked list
    // until the back element is reached
    while (cursor->next != NULL) {
        cursor = cursor->next;
    }
    // add the new node at the back
    cursor->next = new_e;
    return my_list;
}

// function for printing the list
void print_list(struct list *my_list) {
    // a pointer used to go visit the list
    struct list *p;
    for (p = my_list; p; p = p->next) {
        printf("%d ", p->value);
    }
    printf("\n");
}

// function for removing the front element
struct list *remove_front(struct list *my_list) {
    if (my_list != NULL) {
        // A node used to store and delete the front element
        struct list *cursor;
        cursor = my_list;
        my_list = my_list->next;
        // Deallocating the removed node
        free(cursor);
    }
    return my_list;
}

void dispose_list(struct list* my_list) {
    // a node for vising and deleting the linked list elements
    struct list *nextelem;
    while (my_list != NULL) {
        // nextelem is necessary to store the node that points
        // to the next element
        nextelem = my_list->next;
        // deallocation
        free(my_list);
        my_list = nextelem;
    }
}

struct list* reverse_list(struct list *my_list) {
    // using pointers to reverse a list
    struct list *prev = NULL;
    struct list *next = NULL;

    // using three pointers the list is reversed
    while (my_list != NULL) {
        // next is set to the next node
        next = my_list->next;
        // reversing the pointer
        my_list->next = prev;
        // moving pointers by one position
        prev = my_list;
        my_list = next;
    }
    my_list = prev;
    return my_list;
}

// function for finding the size of the linked list
int list_size (struct list *my_list) {
    int size = 0;
    while (my_list != NULL) {
        my_list = my_list->next;
        size++;
    }
    return size;
}

struct list *insert_at(struct list* my_list, int j, int i) {
    // size of the list
    int size = list_size(my_list);

     // new element to be added
    struct list *new_e = (struct list *) malloc(sizeof(struct list));
    if (new_e == NULL) {
        printf("Error allocating memory\n");
        return my_list;
    }
    new_e->value = i;
    new_e->next = NULL;

    // checking for valid position
    if (j < 0 || j > size) {
        printf("Invalid position!\n");
    }

    else if (j == 0) {
        new_e->next = my_list;
        my_list = new_e;
    }

    // a loop for traversal and insertion at a position
    else {
        int i = 0;
        struct list *cursor = my_list;
        while (i != j - 1) {
            cursor = cursor->next;
            i++;
        }
        new_e->next = cursor->next;
        cursor->next = new_e;
    }
    return my_list;
}

int main() {
    char c;
    int i, j;
    // Creating an empty linked list
    struct list *my_list;
    my_list = (struct list*) malloc(sizeof(struct list));
    my_list = NULL;
    // a loop for the input and output
    do {
        scanf("%c", &c);
        getchar();
        // a switch statement for reading the input 
        switch (c) {
            // reading the integer and pushing it at the end
            // of the linked list
            case 'a':
                scanf("%d", &i);
                getchar();
                my_list = push_back(my_list, i);
                break;
            // reading the integer and pushing it at the beginning
            // of the linked list
            case 'b':
                scanf("%d", &i);
                getchar();
                my_list = push_front(my_list, i);
                break;
            // inserting a new element at a position
            case 'i':
                scanf("%d", &j);
                scanf("%d", &i);
                getchar();
                my_list = insert_at(my_list, j, i);
                break;
            // removing the front element of the list
            case 'r':
                my_list = remove_front(my_list);
                break;
            // printing the list
            case 'p':
                print_list(my_list);
                break;
            // reversing the list
            case 'R':
                my_list = reverse_list(my_list);
                break;
            // freeing the memory
            case 'q':
                dispose_list(my_list);
                break;
        }
    } while (c != 'q'); // quitting the loop if input char is q
    return 0;
}