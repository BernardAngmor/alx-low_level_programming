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
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
