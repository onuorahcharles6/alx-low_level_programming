#include "main.h"
/**
 *get_endianness - d process checks 4 endianness
 *Return: 0 if higher endian & 1 when smaller endian
 */
int get_endianness(void)
{
	unsigned int b = 1;
	char *a = (char *)&b;

	if (*a)
		return (1);
	else
		return (0);
}
