#include "search_algos.h"



/**
 * binary_search - searches for a value in an array
 * @array: pointer to the first element of trhe array
 * @size: number of the elements in the array
 * @value: the value we search for
 * Return: index of value; -1 if value not found
 */

int binary_search(int *array, size_t size, int value)
{

	size_t i, start, end;

	if(array == NULL)
		return (-1);

	for(start = 0, end = size - 1; end >= start;)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);


		i = start + (end - start) / 2;

		if (array[i] == value)
			return (i);

		if (array[i] > value)
			end = i - 1;

		else 
			start = i + 1;

	}
	return (-1);
}

