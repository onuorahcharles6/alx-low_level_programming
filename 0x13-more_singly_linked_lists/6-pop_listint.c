#include "lists.h"
/**
 * pop_listint - remove d head node
 * @head : pointer 2 d head of d linked list
 * Return: head node's data (n)
 * or 0 - when linked list is void
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;

	if (temp == NULL)
		return (0);

	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
