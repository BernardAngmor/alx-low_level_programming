#include "main.h"

/**
 * _atoi - convert a string into an int
 *
 * @s: the string to print.
 *
 * Return: int
 */

int _atoi(char *s)
{
	int n = 1, k = 0;
	unsigned int b = 0;

	while (!(s[k] <= '9' && s[k] >= '0') && s[k] != '\0')
	{
		if (s[k] == '-')
			n *= -1;
		k++;
	}
	while (s[k] <= '9' && (s[k] >= '0' && s[k] != '\0'))
	{
		b = (b * 10) + (s[k] - '0');
		k++;
	}
	b *= n;
	return (b);
}
