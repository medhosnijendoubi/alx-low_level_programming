#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - its a singly to a linked lists
 * @str: string - is a malloc string
 * @len: is a length of the strings
 * @next: is a points of the node
 *
 * Description: is a singly linked list to the node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
