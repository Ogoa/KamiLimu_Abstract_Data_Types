#include "stack.h"

/**
 * isEmpty - checks if the stack is empty
 * @top: pointer to the top of the stack
 *
 * Return: 1 if stack is empty, otherwise 0
 */
int isEmpty(stack_node_t *top)
{
	if (top == NULL)
		return (1);
	else
		return (0);
}


/**
 * isFull - checks if the current stack is full
 * @top - pointer to the top of the stack
 * @size - maximum number of nodes allowed in the stack
 *
 * Return: 1 if full, otherwise 0
 */
int isFull(stack_node_t *top, size_t size)
{
	if (top == NULL)
		return (0);

	if (size == 0)
		return (1);
	else
		return (0);
}


/**
 * push - adds data to the top of the stack
 * @top: address of pointer to the top of the stack
 * @data: integer data item to add
 *
 * Return: Nothing
 */
void push(stack_node_t **top, size_t data)
{
	stack_node_t *new_node;

	if (top == NULL)
	{
		perror("Invalid reference to 'top' pointer\n");
		return;
	}
	/*TODO: Check if stack is full */
	new_node = malloc(sizeof(stack_node_t));
	if (new_node == NULL)
	{
		printf("Malloc failed\n");
		return;
	}

	new_node->data = data;

	if (*top == NULL)
	{
		new_node->next = NULL;
		*top = new_node;
	}
	else
	{
		new_node->next = *top;
		*top = new_node;
	}
}


/**
 * pop - removes the item at the top of the stack and returns it
 * @top: address of pointer to the top of the node
 *
 * Return: address of the node at the top, otherwise NULL on failure
 */
stack_node_t *pop(stack_node_t **top)
{
	stack_node_t *top_node;

	if (top == NULL || isEmpty(*top))
		return (NULL);

	if ((*top)->next == NULL) /* Case where stack has one item */
	{
		top_node = *top;
		*top = NULL;
	}
	else /* Case where stack has multiple items */
	{
		top_node = *top;
		*top = top_node->next; /* Point to second node from top */
		top_node->next = NULL;
	}

	return (top_node);
}


/**
 * peek - prints the item at the top of the stack
 * @top: Pointer to the top of the stack
 *
 * Return: Nothing
 */
void peek(stack_node_t *top)
{
	if (isEmpty(top))
		printf("The stack is empty.\n");
	else
		printf("Current item at the top: %d\n", top->data);
}
