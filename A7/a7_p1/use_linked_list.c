#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    char c;
    int i;
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
            // removing the front element of the list
            case 'r':
                my_list = remove_front(my_list);
                break;
            // printing the list
            case 'p':
                print_list(my_list);
                break;
            // freeing the memory
            case 'q':
                dispose_list(my_list);
                break;
        }
    } while (c != 'q'); // quitting the loop if input char is q
    return 0;
}

