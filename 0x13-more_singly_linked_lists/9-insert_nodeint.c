#include "lists.h"
/**
 * insert_nodeint_at_index - sum d recent node 2 a linked list
 * @head : pointer 2 d head of d list
 * @idx  : pointer of d list area in d new node must b added
 * (clues start at 0)
 * @n    : worth 4 d fesh node 2 b included
 * Return: pointer 2 d fresh node,
 * or NULL - if role fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
