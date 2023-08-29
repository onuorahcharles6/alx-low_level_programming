#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - compute d total whole data (n) of a linked list
 * @head : pointer 2 d head of d list
 * Return: total of all d data (n),
 * or 0 - when list empty
 */
int sum_listint(listint_t *head)
{
	int add;

	add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
