#include "main.h"
/**
  * binary_to_uint - changes d binary digit 2 an unsigned int
  * @b: binary number
  * Return: d changed digit or 0 if it fails
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, place;
	int m;

	if (!b)
		return (0);

	for (m = 0; b[m]; m++)
		;
	m--;
	for (place = 1, uint = 0; m >= 0; m--)
	{
		if (b[m] == '0')
		{
			place *= 2;
			continue;
		}
		else if (b[m] == '1')
		{
			uint += place;
			place *= 2;
			continue;
		}
		return (0);
	}
	return (uint);
}
