#include "lists.h"

/**
 * _strlen - returns the length of the string
 * @s: The sring I used to check the length
 * Return: length of the string
 */

int _strlen(char *s)
{
	int j = 0;

	if (!s)
		return (0);
	while (*s++)
		j++;
	return (j);
}

/**
 * print_list - prints the linked list
 * @h: points to the first node in the list
 * Return: The number of nodes
 */

size_t print_list(const list_t *h);
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("(nil)\n");
		else
			printf("[%d] %s\n", _strlen(h->str), h->str);
		h = h->next;
		i++;
	}
	return (i);
}
