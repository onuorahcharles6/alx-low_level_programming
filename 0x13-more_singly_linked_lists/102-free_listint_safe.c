#include "lists.h"

/**
 * free_listp2 - releases linked list
 * @head: head of list.
 * Return: 0 return.
 */
void free_listp2(listp_t **head)
{
	listp_t *tempi;
	listp_t *curry;

	if (head != NULL)
	{
		curry = *head;
		while ((tempi = curry) != NULL)
		{
			curry = curry->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - releases linked list.
 * @h: head of list.
 * Return: size of d list freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *hpt, *new, *add;
	listint_t *curry;

	hpt = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hpt;
		hpt = new;

		add = hpt;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hpt);
				return (nnodes);
			}
		}

		curry = *h;
		*h = (*h)->next;
		free(curry);
		nnodes++;
	}

	*h = NULL;
	free_listp2(&hpt);
	return (nnodes);
}
