#include "hash_tables.h"

/**
 * hash_table_create - creates the table
 * @size: Size of the array
 *
 * Return: a pointer to the newly created hash table
 *		NULL if something wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int j;


	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);


	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		ht->array[j] = NULL;

	return (ht);
}

