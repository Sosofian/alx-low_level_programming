#include <stdio.h>

/**
 * main - main function
 *
 * Documuntation: A C program that print all single digit starting from zero
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		printf("%d", i);
	printf("\n");
	return (0);
}
