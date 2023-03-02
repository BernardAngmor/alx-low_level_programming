#include <stdio.h>
/**
 *main - execution
 *
 *Return: Nil result
 */
int main(void)
{
	int figures;

	for (figures = 48; figures < 58; figures++)
	{
		putchar(figures);
	}
	for (figures = 97; figures < 103; figures++)
	{
		putchar(figures);
	}

	putchar('\n');

	return (0);
}
