
#include "main.h"

/**
 * print_times_table - prints time table
 * @n : times table to use
 * Return: Nil results
 */

void print_times_table(int n)
{
	int a = 0, r, b;

	if (n < 0 || n > 15)
		return;

	while (a <=n)
	{
		for (b =o; b <= n; b++)
		{
			r = a * b;
			if (b == 0)
				_putchar('0' + r);
			else if (r < 10)
			{
				_putchar(' ');
				-putchar(' ');
				_putchar('0' + r);
			}
			else if (r < 100)
			{
				_putchar(' ');
				_putchar('0' + r / 10);
				_putchar('0' + r % 10);
			}
			else
			{
				_putchar('0' + r / 100);
				_putchar('0' + (r - 100) / 10);
				_putchar('0' + r % 10);
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}
