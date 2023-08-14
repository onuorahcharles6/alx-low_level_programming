#include "main.h"
#include <stdio.h>

/**
 *justosky_sqrt_checker - This finds the natural square root of a non- negative
 *integer using simple logic.
 *@a: The interger which we will use to to find the square root.
 *without this number our logic wont work.
 *@b: The number which we are solving for it's natural square root.
 *Return: This function returns an interger which is the value for
 *for the natural square root of interger "b". Returns -1 when
 *the interger "b" does not have a natural square root.
 */

int justosky_sqrt_checker(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	else if (a > b)
	{
		return (-1);
	}
	else

		return (justosky_sqrt_checker(a + 1, b));

}
/**
 *_sqrt_recursion - This function prints square root.
 *@n: The interger that we want to obtain it's value.
 *Return: Returns an interger.
 */

int _sqrt_recursion(int n)
{
	if ((n == 0) || (n == 1))
	{
		return (n);
	}
	else
	{
		return (justosky_sqrt_checker(2, n));
	}
}
