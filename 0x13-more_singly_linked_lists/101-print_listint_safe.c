#include "lists.h"

/**
 * free_listp - releases linked list
 * @head: head of list.
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *tempi;
	listp_t *curry;

	if (head != NULL)
	{
		curry = *head;
		while ((tempi = curry) != NULL)
		{
			curry = curry->next;
			free(tempi);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints d linked list.
 * @head: head of list.
 * Return: number of nodes in d list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *hpt, *new, *add;

	hpt = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hpt;
		hpt = new;

		add = hpt;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hpt);
				return (nnodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listp(&hpt);
	return (nnodes);
}
