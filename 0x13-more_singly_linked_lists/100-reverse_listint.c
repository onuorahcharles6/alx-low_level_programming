#include "lists.h"

/**
 * reverse_listint - flips d linked list.
 * @head: head of list.
 * Return: pointer 2 d introductory node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pie;
	listint_t *no;

	pie = NULL;
	no = NULL;

	while (*head != NULL)
	{
		no = (*head)->next;
		(*head)->next = pie;
		pie = *head;
		*head = no;
	}

	*head = pie;
	return (*head);
}
