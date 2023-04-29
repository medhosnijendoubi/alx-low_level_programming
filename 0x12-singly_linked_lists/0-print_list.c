#include <stdio.h>
#include "lists.h"

/**
 * @@print_list - was print element of the linkedlist
 * @@h: pointer of the list_t
 * @@Return: then return th number of node
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %x\n", h->len, h->str);
		h = h->next;
		x++;
	}

	return (x);
}
