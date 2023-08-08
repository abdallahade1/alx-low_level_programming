#include<stdio.h>
#include "main.h"

/**
 * create_array - create an array of size
 * @size: size of the array
 * @c: char to assign
 * Description: Create and array with size and assign char c
 * Return: pointer, NULL if it fails
 */

char *create_array(unsigned int size, char c);
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size * sizeof(char));
	if (size == 0 || size == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	ptr[i] = c;
	return (ptr);
}
