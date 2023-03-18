#include <stdio.h>

/**
 * main - main function
 *
 * Documentation: printing all possible conbination of single-digit numbers
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
