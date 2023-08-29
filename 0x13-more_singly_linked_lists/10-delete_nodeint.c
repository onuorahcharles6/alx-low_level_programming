#include "lists.h"
/**
 * delete_nodeint_at_index - remove d node located at d
 * specified index within d link list
 * @head : pointer 2 d head of d list
 * @index: index of d node 2 b removed
 * (indices beginning 4rm 0)
 * Return: 1 - if roles succeeds,
 * -1 - if roles fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
		}

	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
