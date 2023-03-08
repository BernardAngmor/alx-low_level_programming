#include "main.h"

/**
 * factorial - gets factorial of a number
 * @n: integer
 *
 * Return: Nil
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
