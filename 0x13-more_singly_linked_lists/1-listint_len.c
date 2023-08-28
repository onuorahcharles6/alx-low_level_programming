#include "lists.h"

/**
 * listint_len - tallys d number of nodes in d linked list
 * @h: head of d list
 *
 * Return: d number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cheta = h;
	size_t count = 0;

	while (cheta != NULL)
	{
		count += 1;
		cheta = cheta->next;
	}
	return (count);
}
