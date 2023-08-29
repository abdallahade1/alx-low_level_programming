#include "lists.h"

/**
 * print_listint - prints all the element of the linked list
 * @h: points at the linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t j = 0;

	while (h)
	{
		printf("%d\n", h->n);
		j++;
		h = h->next;
	}

	return (j);
}
