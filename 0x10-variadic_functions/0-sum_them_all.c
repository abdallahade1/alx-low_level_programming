#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums the variable arguments
 * @n: the number of the arguments
 * @...: The integers to sum
 * Return: The integer sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	if (!n)
		return (0);
	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
}
