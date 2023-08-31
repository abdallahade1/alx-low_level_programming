#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: the character containing the binary num
 * Return: the value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uns_num  = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		uns_num = uns_num * 2 + (*b++ - '0');
	}
	return (uns_num);
}
