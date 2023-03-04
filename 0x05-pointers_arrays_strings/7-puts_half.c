#include "main.h"

/**
 * puts_half - prints the second half of a string.
 *@str: the string to print
 */

void puts_half(char *str)
{
	int a, b, c;

	for (a = 0; str[a] != '\0'; a++)
	{
	}
	b = (a - 1) / 2;

	for (c = b + 1; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
