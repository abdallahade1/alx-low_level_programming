#include <stdio.h>

/**
 * add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of a and b.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * subtract - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of a - b.
 */
int subtract(int a, int b)
{
	return (a - b);
}

/**
 * multiply - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of a and b.
 */
int multiply(int a, int b)
{
	return (a * b);
}

/**
 * divide - Divides two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The result of a / b. If b is 0, returns 0 with an error message.
 */

int divide(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}

/**
 * modulus - Calculates the modulus of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of a % b. If b is 0, returns 0 with an error message.
 */
int modulus(int a, int b)
{
	if (b == 0)
	{
	printf("Error: Modulus by zero\n");
	return (0);
	}
	return (a % b);

}
