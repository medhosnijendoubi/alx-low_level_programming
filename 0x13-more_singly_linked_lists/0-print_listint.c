#include "lists.h"

/**
 * print_listint - this will prints all the elements of a linkedlist
 * @h: is a linked list of type listint_t to print
 *
 * Return: all number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
