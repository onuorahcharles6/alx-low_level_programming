#include <stdio.h>

/**
 *_pow_recursion - This function solves for the value of x exponent y ie x^y
 *@x: This is the base number.
 *@y: This is our exponent value.
 *Return: This function returns an interger which is the value of x exponent y
 *returns -1 when y is a non-positive interger.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
