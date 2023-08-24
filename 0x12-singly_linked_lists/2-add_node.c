#include "lists.h"

/**
 * add_node - adds a new node at the biggining of the list
 * @head: points to the head node
 * @str: data field of the node
 *
 * Return: size of the length
 */

#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{

	unsigned int len = 0;


	while (str[len])
		len++;

	list_t *new_node = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}

