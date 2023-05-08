#include "main.h"
#include <stdio.h>
/**
 * clear_bit - used to set a value of a bit to 0 at a given indexes
 * @n: is a pointer to a decimal number to change
 * @index: is an index position to change
 * Return: that will returnn 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;
	unsigned int test;

	if (index > 64)
		return (-1);
	test = index;
	for (j = 1; test > 0; j *= 2, test--)
		;

	if ((*n >> index) & 1)
		*n -= j;

	return (1);
}
