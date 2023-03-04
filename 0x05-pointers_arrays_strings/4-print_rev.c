#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 *@s: the string to print.
 *
 */

void print_rev(char *s)
{
	int k = 0;
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
	}

	for (k = c - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
