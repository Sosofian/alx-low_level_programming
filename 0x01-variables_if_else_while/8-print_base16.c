#include <stdio.h>

/**
 * main - main fuction
 *
 * Documentation: A C program that print all numbers of base 16 in lower case
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (i = 'a' ; i <= 'f' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
