#include <stdio.h>

/**
 * main - main function
 *
 * Documentation: A C program that print the alphabet except e and q
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
