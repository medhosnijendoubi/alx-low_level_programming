#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - this to add a new nodes at the begin of a linkedlist
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int test = 0;

	while (str[test])
		test++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->test = test;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
