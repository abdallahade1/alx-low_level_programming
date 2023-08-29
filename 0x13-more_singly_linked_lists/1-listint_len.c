#include "lists.h"

/**
 * listint_len - prints the number of elements in the linked list
 * @h: points at the linked list
 * Return: num of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t j = 0;

	while (h)
	{
		j++;
		h = h->next;
	}

	return (j);
}
