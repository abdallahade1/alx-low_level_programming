#include "hash_tables.h"

/**
 * hash_table_create - creates the table
 * @size: Size of the array
 *
 * Return: a pointer to the newly created hash table
 * 		NULL if something wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int j;
	hash_table_t *Ht;

	Ht = malloc(sizeof(hash_table_t));
	if (Ht == NULL)
		return NULL;


	Ht->size = size;
	Ht->array = malloc(sizeof(hash_node_t *) * size);
	if (Ht->array == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		Ht->array[j] = NULL;

	return (Ht);
}

