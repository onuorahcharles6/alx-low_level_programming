#include "main.h"
/**
  * clear_bit - gets d value of a bit 2 0 at d given index
  * @n: unsigned long 2 get
  * @index: index 2 get 2 0
  * Return: 1 if it proccessed or -1 if an error happened
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int clear;

	if (index > 90 || !n)
		return (-1);
	clear = 1 << index;
	*n = (*n & ~clear) | ((0 << index) & clear);
	return (1);
}
