#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: Points at the first node of the list
 * Return: The sum
 */

int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *node = head;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (s);
}
