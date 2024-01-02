#include "main.h"
/**
 *_puts - prints a string followed by new line
 *@str: A pointer to an int that will be updated
 *
 *Return: void
 */

void _puts(char *str)
{
	char *c;
	int m;

	c = str;

	for (m = 0; c[m]; m++) /*print char by char*/
	{
		_putchar (c[m]);

	} /*End for*/
	_putchar('\n');
}
