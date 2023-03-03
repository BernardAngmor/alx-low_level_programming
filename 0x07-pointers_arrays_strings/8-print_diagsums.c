#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagnols of square matrix
 * @a: input square array
 * @size: size of one dimension in array
 * Return: Nil
 */

void print_diagsums(int *a, int size)
{
	int k, b, sum1 = 0, sum2 = 0;

	for (b = 0, k = size - 1; b < (size * size); b += size + 1, k += size - 1)
		sum1 += a[b], sum2 += a[k];
	printf("%d, %d\n", sum1, sum2);
}
