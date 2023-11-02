#include "hash_tables.h"

/**
 * key_index - gives the index of the key
 * @key: pointer tp key
 * @size: size of the array of the table
 *
 * Return: the index of the key/value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
