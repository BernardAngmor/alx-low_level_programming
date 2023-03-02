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
		if (figures == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
