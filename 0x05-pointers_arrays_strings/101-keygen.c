#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - Execution of code
 *
 * Return: Nil
 */

int main(void)
{
	int ascii = 2772, k = 0, b, random;
	char password[100];
	time_t t;

	srand((int) time(&t));
	while (ascii > 126)
	{
		random = rand() % 126;
		password[k] = random;
		ascii -= random;
		k++;
	}
	if (ascii > 0)
		password[k] = ascii;
	else
	{
		k--;
	}

	for (b = 0; b <= k; b++)
	{
		printf("%c", password[b]);
	}
	return (0);
}
