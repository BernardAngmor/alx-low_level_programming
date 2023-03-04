#include "main.h"

/**
 * rev_string - reversed string
 *
 *@s: the string to print.
 */

void rev_string(char *s)

{
	int k, b, c;
	char a1, a2;

	for (k = 0; s[k] != '\0'; k++)
	{
	}

	b = k - 1;
	c = 0;

	while (b > c)
	{
		a1 = s[c];
		a2 = s[b];
		s[c] = a2;
		s[b] = a1;
		b--;
		c++;
	}
}
