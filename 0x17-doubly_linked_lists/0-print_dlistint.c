#include "lists.h"

/**
 * print_dlistint - used to prints all the elements of a
 * dlistint_t list
 *
 * @h: is a head of the list
 * Return: is the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int numb;

	numb = 0;

	if (h == NULL)
		return (numb);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		numb++;
		h = h->next;
	}

	return (numb);
}
