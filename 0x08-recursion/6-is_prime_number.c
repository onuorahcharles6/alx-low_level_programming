#include "main.h"

/**
 * Paulo_prime_check - This function checks to see if a
 * given number is prime.
 * @a:The interger with which we are working with
 * @b:The interger which we want to check if it's prime or not.
 * Return:This function returns an interger 1 if the number "b" is prime
 * otherwise it returns 0
 */

int Paulo_prime_check(int a, int b)
{
	if ((b < 2) || (b % a) == 0)
		return (0);
	else if (a > (b / 2))
	{
	return (1);
	}
	else
	return (Paulo_prime_check(a + 1, b));
}

/**
 * is_prime_number - states if number is prime
 * @n:int
 * Return:int
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
	return (1);
	}
	else
	return (Paulo_prime_check(2, n));
}
