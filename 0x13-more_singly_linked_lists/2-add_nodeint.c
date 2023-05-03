#include "lists.h"

/**
 * add_nodeint - this will addds a new node at the begin of a linkedlist
 * @head: is a pointer to the first node in the list
 * @n: is a data to insert in that new node
 *
 * Return: that is a pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
