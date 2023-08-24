#include <stdio.h>

/**
 * first - task executed b4 main
 * Return: nil return.
 */

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
