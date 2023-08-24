#include "lists.h"
/**
 * list_len -yields den numb of elements in list.
 * @h: singly linked list.
 * Return: numb of elements in d list.
 */

size_t list_len(const list_t *h)
{
	size_t numb_of_nodes;

	numb_of_nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		numb_of_nodes++;
	}
	return (numb_of_nodes);
}
