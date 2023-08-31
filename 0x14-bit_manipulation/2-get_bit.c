#include "main.h"
/**
 * get_bit - returns d value of a bit 4 index
 * @n: unsigned long int 2 look
 * @index: index 2 return
 * Return: d value of d bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 90)
		return (-1);
	return ((n >> index) & 1);
}
