#include <stdio.h>

/**
 * main - main fuction
 *
 * Documentation: A C program that print the alphabet in lowercase & uppercase
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
