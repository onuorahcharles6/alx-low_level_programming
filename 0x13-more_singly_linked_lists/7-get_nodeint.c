#include "lists.h"
/**
 * get_nodeint_at_index - locates d node in dis linked list
 * @head : pointer 2 d head of d linked list
 * @index: index of d node 2 locate (indexes degins 4rm 0)
 * Return: pointer 2 node,
 * or NULL - when node does'nt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n;

	for (n = 0; (n < index) && (head->next); n++)
		head = head->next;

	if (n < index)
		return (NULL);

	return (head);
}
