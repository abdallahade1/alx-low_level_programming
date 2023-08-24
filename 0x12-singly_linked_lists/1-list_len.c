#include "lists.h"
#include <stdlib.h>
/**
 * list_len - measure the lenght of the linked list
 * @h: pointer to the first node
 *
 * Return: lenght of the list
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
