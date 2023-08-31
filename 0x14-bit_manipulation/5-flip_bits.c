#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_val = n ^ m;
	unsigned int count = 0;

	while (xor_val)
	{
		if (xor_val & 1ul)
			count++;
		xor_val = xor_val >> 1;
	}
	return (count);
}
