#include "main.h"

/**
 * print_last_digit - last digit
 *
 *@n: The int to print
 * Return: Nil result.
 */

int print_last_digit(int n)

{
	int last_num;

	if (n < 0)

	{
		last_num = (-1 * (n % 10));
		_putchar (last_num + '0');
		return (last_num);
	}
	else
	{
		last_num = (n % 10);
		_putchar (last_num + '0');
		return (last_num);
	}
}
