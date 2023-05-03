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
	list_t *test2;
	unsigned int test = 0;

	while (str[test])
		test++;

	test2 = malloc(sizeof(list_t));
	if (!test2)
		return (NULL);

	test2->str = strdup(str);
	test2->test = test;
	test2->next = (*head);
	(*head) = test2;

	return (*head);
}
