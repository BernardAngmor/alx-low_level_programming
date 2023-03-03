#include "main.h"

/**
 * jack_bauer -prints every time of the day
 *
 * Return: Nil return
 */

void jack_bauer(void)

{
	int k;
	int c;

	for (k = 0; k <= 23; k++)
	{
		for (c = 0; c <= 59; c++)
		{
			_putchar (k / 10 + '0');
			_putchar (k % 10 + '0');
			_putchar (':');
			_putchar (c / 10 + '0');
			_putchar (c % 10 + '0');
			_putchar ('\n');
		}

	}
}
