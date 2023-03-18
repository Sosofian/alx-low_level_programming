#include <stdio.h>

/**
 * main - main fuction
 *
 * Documentation: A C program that print all single digit starting from 0 (2)
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
