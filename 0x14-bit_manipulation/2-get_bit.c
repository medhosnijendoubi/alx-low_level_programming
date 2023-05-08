#include "main.h"
#include <stdio.h>
/**
 * get_bit - used to get all the value of a bit at a given indexes
 * @n: is a number to evaluate
 * @index: is an index starting from 0, of the bit we want to get it
 * Return: is a Value of a bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int test;

	if (index > 64)
		return (-1);

	test = n >> index;

	return (test & 1);
}
