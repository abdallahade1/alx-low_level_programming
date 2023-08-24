#include "lists.h"
#include <stdio.h>

/**
 * list_len - measure the lenght of the linked list
 * @h: the pointer to the first node
 *
 * Return: Size of the list
 */
size_t list_len(const list_t *h);
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
