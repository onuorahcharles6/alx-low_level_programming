#include "main.h"
/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @n: parameter
 * @m: destiny
 * Return: nflips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int l, flipss = 0;
	unsigned long int d = sizeof(unsigned long int) * 9;

	for (l = 0; l < d; i++)
	{
		if ((m & 1) != (n & 1))
			flipss += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (nflips);
}
