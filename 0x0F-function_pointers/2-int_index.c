#include "function_pointers.h"

/**
 * int_index - Goes for an integer
 * @array: array to search
 * @size: size of the array
 * @cmp: pointer to the main funct
 *
 * Return: index of the beginning element in which
 * the funct does not return 0, or -1 if no match is found
 * or size is -
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
