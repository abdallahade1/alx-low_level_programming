#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: points at the first node in the list
 * @idx: where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nd;
	listint_t *temp = *head;

	nd = malloc(sizeof(listint_t));
	if (!nd || !head)
		return (NULL);

	nd->n = n;
	nd->next = NULL;

	if (idx == 0)
	{
		nd->next = *head;
		*head = nd;
		return (nd);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			nd->next = temp->next;
			temp->next = nd;
			return (nd);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
