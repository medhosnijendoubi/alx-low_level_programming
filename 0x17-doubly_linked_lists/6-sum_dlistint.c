#include "lists.h"

/**
 * sum_dlistint - used to returns the sum of all the data
 * of a doubly linked list
 *
 * @head: is a head of the list
 * Return: is a sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int gha;

	gha = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			gha += head->n;
			head = head->next;
		}
	}

	return (gha);
}
