#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a skecific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *k;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	k = (char *) malloc(sizeof(char) * size);

	if (k == NULL)
		return (0);

	while (i < size)
	{
		*(k + i) = c;
		i++;
	}

	*(k + i) = '\0';

	return (k);
}
