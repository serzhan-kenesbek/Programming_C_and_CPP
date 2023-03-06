/*
CH-230-A
a8_p3.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
    if (queue_is_full()) {
        printf("Queue overflow\n");
        return -1;
    }
    Node *newnode = (Node *) malloc(sizeof(Node));
    if (newnode == NULL) {
        printf("Error allocating memory\n");
        return -1;
    }
    newnode->item = item;
    newnode->next = NULL;
    if (pq->front == NULL) {
        pq->front = newnode;
    }
    else {
        pq->rear->next = newnode;
    }
    pq->rear = newnode;
    pq->items++;
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
    if (queue_is_empty()) {
        printf("Queue underflow\n");
        return -1;
    }
    Node *todelete = pq->front;
    if (queue->items == 1) {
        pq->front = pq->rear = NULL;
    }
    else {
        pq->front = pq->front->next;
    }
    *pitem = todelete->item;
    free(todelete);
    pq->items--;
    return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}

void printq(Queue *pq) {
    Node *current = pq->front;
    while (current != NULL) {
        printf("%d ", current->item);
        current = current->next;
    }
    printf("\n");
}