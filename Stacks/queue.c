#include "queue.h"

/**
 * isEmpty - checks if the queue is empty
 * @front: pointer to the front of the queue
 *
 * Return: 1 if the queue is empty, otherwise 0
 */
int isEmpty(queue_node_t *front)
{
	return (front == NULL);
}

/*TODO: Implement isFull() function */


/**
 * enqueue - adds an item to the back of the queue
 * @front: address of the pointer to the front of the queue
 * @rear: address of the pointer to the back of the queue
 * @data: integer value
 *
 * Return: 1 on success, otherwise 0 on failure
 */
int enqueue(queue_node_t **front, queue_node_t **rear, size_t data)
{
	queue_node_t *new_node;

	/* TODO: Check if queue is full */
	new_node = malloc(sizeof(queue_node_t));
	if (new_node == NULL)
	{
		perror("Malloc failed when enqueuing\n");
		return (0);
	}

	new_node->data = data;
	new_node->next = NULL;

	if (isEmpty(*front))
	{
		*front = *rear = new_node;
	}
	else
	{
		(*rear)->next = new_node;
		*rear = new_node;
	}
	
	return (1);
}


/**
 * dequeue - removes an item from the front of the queue
 * @front: address of the pointer to the front of the queue
 * @rear: address of the pointer to the back of the queue
 *
 * Return: pointer to the removed node, otherwise NULL on failure
 */
queue_node_t *dequeue(queue_node_t **front, queue_node_t **rear)
{
	queue_node_t *front_node;

	if (isEmpty(*front))
		return (NULL);

	front_node = *front;
	if (front_node->next == NULL)
		*front = *rear = NULL;
	else
		*front = front_node->next;

	front_node->next = NULL;

	return (front_node);
}


/**
 * peek - prints the item currently at the front of the queue
 * @front: pointer to the front of the queue
 *
 * Return: Nothing
 */
void peek(queue_node_t *front)
{
	if (isEmpty(front))
		printf("Queue is empty!\n");
	else
		printf("Current item at the front of the queue: %d\n", front->data);
}
