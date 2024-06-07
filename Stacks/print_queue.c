#include "queue.h"

/**
 * print_queue - prints the queue onto the standard output
 * @front: pointer to the front of the queue
 *
 * Return: Nothing
 */
void print_queue(queue_node_t *front)
{
	queue_node_t *current;

	if (isEmpty(front))
		printf("Queue is empty.\n");

	current = front;
	printf("\nCurrent queue:\n");
	while (current)
	{
		printf("%d\n", current->data);
		current = current->next;
	}
}
