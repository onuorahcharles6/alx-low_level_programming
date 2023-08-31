#include "main.h"
/**
 * print_binary - prints d binary structure of d digit
 * @n: unsigned long, digit 2 b showcased in binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	(n & 1) ? _putchar('1') : _putchar('0');
}
