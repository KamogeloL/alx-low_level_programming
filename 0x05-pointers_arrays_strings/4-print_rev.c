#include "main.h"
/**
 * get the length of the string
 * print_rev - prints a string rev
 *@s: A pointer to an int that will be updated
 *
 *Return: void
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	/*Count length of string*/
	{
		i++;
	}

	for (i = i - 1 ; i >= 0; i--)
	/*print char by char in rev*/
	{
		_putchar (s[i]);
	}

	_putchar ('\n');
}
