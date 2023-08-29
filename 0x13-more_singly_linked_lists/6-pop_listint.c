#include "lists.h"

/**
 * pop_listint - pops head node of the list
 * @head: The first node of the list
 * Return: value of popped node
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;

	return (n);
}

