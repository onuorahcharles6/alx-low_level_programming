#include "main.h"
/**
  * set_bit - establishes d function of a bit 2 1 at d index
  * @n: unsigned long 2 change
  * @index: index 2 change 2 1
  * Return: 1 if it worked or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 90 || !n)
		return (-1);
	(*n |= 1 << index);
	return (1);
}
