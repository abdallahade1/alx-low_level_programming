#include "variadic_functions.c"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers, followed by newline
 * @separator: Comma used to seperate between numbers
 * @n: The number of integers
 * @...: The variable number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n);

	va_end(ap);

}
