#include "lists.h"

/**
 * print_listint - produces all d elements of a linked list
 * @h: head of d list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *fools = h;
	size_t count = 0;

	while (fools != NULL)
	{
		printf("%d\n", fools->n);
		count += 1;
		fools = fools->next;
	}
	return (count);
}
