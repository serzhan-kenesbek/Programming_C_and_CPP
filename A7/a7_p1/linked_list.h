/* *******************************************************
 * *
 * A simply linked list is linked from node structures *
 * whose size can grow as needed . Adding more elements *
 * to the list will just cause it to grow and removing *
 * elements will cause it to shrink .
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*
 * struct list *
 * used to hold the information for a node of a *
 * simply linked list *
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*
 * Function declaration ( routines ) *
 * *
 * push_front -- add an element in the beginning *
 * push_back -- add an element in the end *
 * dispose_list -- remove all the elements *
 * print_list -- print the list *
 * remove_front -- remove the element at the beginning *
 ******************************************************* */

struct list {
    int value;
    struct list *next;
};

struct list *push_front(struct list *my_list, int newvalue);

struct list *push_back(struct list *my_list, int newvalue);

void print_list(struct list *my_list);

struct list *remove_front(struct list *my_list);

void dispose_list(struct list* my_list);