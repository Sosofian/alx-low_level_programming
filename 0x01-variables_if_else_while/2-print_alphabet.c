#include <stdio.h>

/**
 * main - main fonction
 *
 * Documentation: A C program that prints the alphabet in lower case.
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
