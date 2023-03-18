#include <stdio.h>

/**
 * main - main function
 *
 * Documentation: A C program that print lowercase alphabet in reverse
 *
 * return: always 0 (success)
*/

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
