#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct queue_node - singly linked list
 * @data: integer value
 * @next: pointer to the next node in the queue
 *
 * Desciption: A singly linked list node structure
 */
typedef struct queue_node
{
	int data;
	struct queue_node *next;
} queue_node_t;


int isEmpty(queue_node_t *front);
int isFull(queue_node_t *rear);
int enqueue(queue_node_t **front, queue_node_t **rear, size_t data);
queue_node_t *dequeue(queue_node_t **front, queue_node_t **rear);
void peek(queue_node_t *front);
void print_queue(queue_node_t *front);

#endif /* QUEUE_H */
