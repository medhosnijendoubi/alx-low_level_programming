#include <stdio.h>
#include "lists.h"

/**
 * print_list - that will print all the element from a linkedlist
 * @h: is a  pointer to the list to print
 *
 * Return: a number of node
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
