#include "stack.h"

/**
 * print_stack - prints the elements of the stack, onto standard output
 * @top: pointer to the top of the stack
 *
 * Return: Nothing
 */
void print_stack(stack_node_t *top)
{
	stack_node_t *current; /* Used to traverse the stack */

	if (top == NULL)
	{
		printf("Stack is empty!\n");
		return;
	}

	current = top;
	printf("\nCurrent stack:\n");
	while (current)
	{
		printf("%d\n", current->data);
		current = current->next;
	}
}
