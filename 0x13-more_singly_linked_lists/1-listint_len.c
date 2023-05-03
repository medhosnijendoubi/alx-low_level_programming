#include "lists.h"

/**
 * listint_len - that will returns all the number of elements in a linked lists
 * @h: is a linked list of the type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t test = 0;

	while (h)
	{
		test++;
		h = h->next;
	}

	return (test);
}
