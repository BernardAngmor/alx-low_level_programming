#include <stdio.h>
/**
 *main - execution
 *
 *Return: Nil result
 */
int main(void)
{
	int figures;
	int mynumber;

	for (figures = '0'; figures <= '9'; figures++)
	{
		for (mynumber = '0'; mynumber <= '9'; mynumber++)
		{
			if (figures < mynumber)
			{
				putchar(figures);
				putchar(mynumber);

				if (figures != '8' || (figures == '8' && mynumber != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
