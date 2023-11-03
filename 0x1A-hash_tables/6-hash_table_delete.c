#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *t_node, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			t_node = ht->array[i];
			while (t_node != NULL)
			{
				tmp = t_node->next;
				free(t_node->key);
				free(t_node->value);
				free(t_node);
				t_node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
