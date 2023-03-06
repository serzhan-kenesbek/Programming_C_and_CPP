#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

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
