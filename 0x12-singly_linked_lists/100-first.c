#include "lists"
#include <stdio.h>

void before(void) __attribute__ ((constructor));

/**
 * before -  print the sentence before the main function
 *
 * Return:void
 */

void before(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
