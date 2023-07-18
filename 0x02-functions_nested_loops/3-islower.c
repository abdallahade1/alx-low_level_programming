#include "main.h"

/**
 *_islower - function to check for lowercase
 *
 *@c: checks input of function
 *
 *Return: return 1 if c is lowercase
 *	otherwise always 0
 */


int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
