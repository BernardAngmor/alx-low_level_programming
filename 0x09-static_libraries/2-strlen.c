#include "main.h"

/**
 * _strlen - compute the length of a string.
 *
 * @s: length of a string
 * Return: string length
 */

int _strlen(char *s)
{
	int i;

	int k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		k++;
	}

	return (k);
}
