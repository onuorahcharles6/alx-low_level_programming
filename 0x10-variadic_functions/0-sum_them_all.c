#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Program returns sum of its parameters.
 * @n: identifies all the argu
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	/* generating va_list storage 4 variable argu list */
	va_list my_nums;
	unsigned int count;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;

	/* init va_list 4 the number of argu */
	va_start(my_nums, n);

	/* directs all argu stored in the valist */
	for (count = 0; count < n; count++)
		sum += va_arg(my_nums, int);
	va_end(my_nums);
	return (sum);
}
