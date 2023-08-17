#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - funct prints digits.
 * @n: shows numbers around argu
 * @separator: identifies seperator among digits
 * Return: As usual 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* generating va_list then stores variable argu list */
	va_list my_nums;
	unsigned int count;

	/* init valist for the number of argu in the list */
	va_start(my_nums, n);

	/* connects all argu stored in the va_list */
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(my_nums, unsigned int));
		if (count < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(my_nums);
	printf("\n");
}
