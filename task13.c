#include "monty.h"

/**
 *f_rotl- rtol
 *@head: head
 *@counter: counter
 *Return: rotl
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *n;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	n = (*head)->next;
	n->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = n;
}
