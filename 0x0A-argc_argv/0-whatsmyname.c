
#include <stdio.h>
#include <stdlib.h>

/**
 * main - execution of code
 *
 * @argc: Counts the arguments supplied to the program
 * @argv: Array of pointers to the strings
 * Return: Nil
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
