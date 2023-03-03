#include "main.h"
/**
 *main - execution of code
 *
 *Return: Nil result
 */
int main(void)
{
	char word[] = "_putchar";

	int k;

	for (k = 0; k < 8; k++)
	{
		_putchar(word[k]);
	}

	_putchar('\n');
	return (0);
}
