#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @a: parametr to be checked
 *
 *Return: always 0
*/

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
