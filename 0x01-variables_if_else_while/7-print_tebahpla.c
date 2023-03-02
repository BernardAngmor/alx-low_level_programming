#include <stdio.h>
/**
 *main - execution
 *
 *Return: Nil result
 */
int main(void)
{
	char character;

	for (character = 'z'; character >= 'a'; character--)
	{
		putchar(character);
	}
