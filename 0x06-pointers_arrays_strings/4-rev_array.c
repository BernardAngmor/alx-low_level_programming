#include "main.h"

/**
 *reverse_array - reverse an array.
 *@a: array.
 *@n: number of elements of the array.
 */

void reverse_array(int *a, int n)
{
	int i, k, b;

	k = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		b = a[i];
		a[i] = a[k];
		a[k] = b;
		k--;
	}
}
