#include "main.h"

/**
 *string_toupper - convert lowercase string to uppercase.
 *@s: string to modify.
 *
 *Return: Nil.
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] -= 32;
		}
		i++;
	}

	return (s);
}
