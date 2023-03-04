#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 *@str: the string to print.
 *
 */

void puts2(char *str)

{
	int k = 0;

	while (str[k] != '\0')
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
		k++;
	}
	_putchar('\n');
}
