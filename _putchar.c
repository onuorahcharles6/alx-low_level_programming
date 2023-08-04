#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On succces 1.
 * On error, -1 is retturned, and errno is set apropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
