#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *test;
	char *old_test;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	test = malloc(new_size);
	if (!test)
		return (NULL);

	old_test = ptr;

	if (new_size < old_size)
	{
		for (j = 0; j < new_size; j++)
			test[j] = old_test[j];
	}

	if (new_size > old_size)
	{
		for (j = 0; j < old_size; j++)
			test[j] = old_test[j];
	}

	free(ptr);
	return (test);
}
