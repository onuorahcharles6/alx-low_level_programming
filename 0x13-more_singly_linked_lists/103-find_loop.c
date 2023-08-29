#include "lists.h"
/**
 * find_listint_loop -locate d loop
 * in d linked list
 * @head : pointer 2 d head of d linked list
 * Return: pointer 2 d node indicating d loop starts,
 *  or NULL - 4 no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *grades = head;
	listint_t *more = head;

	if (!head)
		return (NULL);

	while (grades && more && more->next)
	{
		more = more->next->next;
		grades = grades->next;

		if (more == grades)
		{
			grades = head;
			while (grades != more)
			{
				grades = grades->next;
				more = more->next;
			}
			return (more);
		}
	}
	return (NULL);
}
