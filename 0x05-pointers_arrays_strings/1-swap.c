
#include "main.h"

/**
 * swap_int - interchanges two int
 * @a: an integer
 * @b: another integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
