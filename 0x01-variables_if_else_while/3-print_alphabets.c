#include <stdio.h>

/**
* main - Entry
*
* Description: A program that prints the alphabet.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	char chr = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (chr <= 'Z')
	{
		putchar(chr);
		ch++;
	}
	putchar('\n');
	return (0);
}
