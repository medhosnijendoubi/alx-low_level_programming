#include "main.h"

/**
 * set_bit - used to  sets a value of a bit to 1 at a given indexes
 * @n: is a decimal number that will passed by pointer
 * @index: is an index position to change, starting from zero
 * Return: is 1 if it worked, -1 if get an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;

	if (index > 64)
		return (-1);

	for (k = 1; index > 0; index--, k *= 2)
		;
	*n += k;

	return (1);
}

