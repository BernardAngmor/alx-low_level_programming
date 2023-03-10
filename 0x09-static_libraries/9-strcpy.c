#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 *@src: pointer.
 *@dest: pointer.
 *Return: Nil.
 */

char *_strcpy(char *dest, char *src)
{
	int k, a;

	for (a = 0; src[a] != '\0'; a++)
	{
	}

	for (k = 0; k <= a ; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
