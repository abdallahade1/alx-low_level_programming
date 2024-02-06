#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * @array: pointer to the first element of trhe array
 * @size: number of the elements in the array
 * @value: the vlaue we search for
 * Return: index of value; -1 if value not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
