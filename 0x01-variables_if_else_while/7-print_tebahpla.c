#include<stdio.h>

/**
 * main - Entry
 *
 * Description: print alpha in reverse
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
