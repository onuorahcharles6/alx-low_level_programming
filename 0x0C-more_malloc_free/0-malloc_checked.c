#include <stdlib.h>
/**
 * malloc_checked - assign  memory using malloc.
 * @b: size of memory to Assign.
 * Return: pointer to assigned memory.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
