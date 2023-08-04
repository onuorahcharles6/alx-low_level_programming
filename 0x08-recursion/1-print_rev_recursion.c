#include "main.h"

/**
 *_print_rev_recursion - This function prints a string in reverse recursively.
 *@s: The string to be printed in reverse.
 *Return: This function returns (void).
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{

	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
