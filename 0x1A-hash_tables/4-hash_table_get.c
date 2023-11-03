#include "hash_tables.h"

/**
 * hash_table_get - function to retrive value
 * @ht: pointer to hash table
 * @key: the key to get the value from
 *
 * Return: value or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current_node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	current_node = ht->array[idx];
	while (current_node && strcmp(current_node->key, key) != 0)
		current_node = current_node->next;

	return ((current_node == NULL) ? NULL : current_node->value);
}
