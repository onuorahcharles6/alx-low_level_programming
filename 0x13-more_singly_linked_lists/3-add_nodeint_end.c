#include "lists.h"

/**
 * add_nodeint_end - sums a node 2 d end of a linked list
 * @head: points 2 d head of d list
 * @n: number 2 b used as content
 * Return: location of d newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *paul = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
		return (NULL);
	if (paul != NULL)
	{
		while (paul->next != NULL)
			paul = paul->next;
		paul->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
