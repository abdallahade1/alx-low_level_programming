#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, current = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			current++;
		}
		else if (current)
			_putchar('0);
	}
	if (!current)
		_putchar('0');
}
