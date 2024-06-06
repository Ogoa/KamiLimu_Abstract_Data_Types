#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * struct stack_node - singly linked list
 * @data: integer
 * @next: pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct stack_node
{
	int data;
	struct stack_node *next;
} stack_node_t;


int isEmpty(stack_node_t *top);
int isFull(stack_node_t *top, size_t size);
void push(stack_node_t **top, size_t data);
stack_node_t *pop(stack_node_t **top);
void peek(stack_node_t *top);
void print_stack(stack_node_t *top);

#endif /* STACK_H */
