/* *******************************************************
 * *
 * stack is an abstract data type that serves as *
 * a collection of elements. It follows the LIFO *
 * data structure type. This means that when we put *
 * data in a stack it processes the last entry first *
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*
 * struct stack *
 * used to hold the information for a node of a *
 * stack *
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*
 * Function declaration ( routines ) *
 * *
 * push - add an element to the stack *
 * print - print all of the elements of the stack *
 ******************************************************* */

struct stack {
    unsigned int count;
    int array[12]; // Container
};

void push();

void prints();

// void pop();

// void empty();

// _Bool isEmpty();*/
