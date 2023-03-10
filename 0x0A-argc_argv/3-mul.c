
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
	int n, k;

	k = 0;
	if (argc != 3)
	{
		printf("%s\n", "Error");
		k = 1;
	}
	else
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", n);
	}
	return (k);
}
