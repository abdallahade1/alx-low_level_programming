#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: the first node in the list
 * @idx: the index of the node
 * @n: n value of the node
 * Return: pointer to new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			new->next = node->next;
			node->next = new;
			return (new);
		}
		i++;
		node = node->next;
	}
	free(new);
	return (NULL);
}
