#include <stdlib.h>
#include "lists.h"

/**
 * list_len - that will return all the number of an elements in a linkedlist
 * @h: is a pointer to the list
 *
 * Return: that will return a number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
