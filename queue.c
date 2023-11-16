#include "monty.h"

/**
 * f_queue - queue
 * @head: head
 * @counter: counter
 * Return: queue
 */
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - node
 * @n: int
 * @head: head
 * Return: node
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *n;

	n = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (n)
	{
		while (n->next)
			n = n->next;
	}
	if (!n)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		n->next = new_node;
		new_node->prev = n;
	}
}
