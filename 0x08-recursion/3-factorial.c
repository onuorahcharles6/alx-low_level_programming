#include "main.h"

/**
 *factorial - This function computes the factorial of non-negative intergers.
 *@n: The number which factorial is to be computed.
 *Return: This function returns an interger which is the value of  n. When
 *the value for n is negative we return -1 to indicate an error.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);/* Reurns -1 to indicate an error. n most be 0 or positive*/
	}
	else if (n == 0)
	{
		return (1); /* We return one because the factorial of zero is one */
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
