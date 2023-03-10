#include <stdio.h>
#include <stdlib.h>

/**
 * main - Execution of code
 *
 * @argc: Counts the arguments supplied to the program
 * @argv: Array of pointers to the strings
 * Return: Nil
 */
int main(int argc, char **argv)
{
	int k;

	if (argc > 0)
	{
		for (k = 0; k < argc; k++)
		{
			printf("%s\n", argv[k]);
		}
	}
	return (0);
}
