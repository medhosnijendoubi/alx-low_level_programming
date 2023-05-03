#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - this will add a new node at end of linkedlist
 * @head: is a double pointer to the list
 * @str: is a string to put in a new nodes
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int test = 0;

	while (str[test])
		test++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->test = test;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
