#include "main.h"

/**
 * print_chessboard - a function that prints a chessboard
 * @a: an array input to print
 * Return: Nil
 */
void print_chessboard(char (*a)[8])
{
	int k = 0, b;

	for (; k < 8; k++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[k][b]);
		_putchar('\n');
	}
}
