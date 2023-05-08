#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - used to convert an number binary to unsigned int
 * @b: is a char string
 * Return: used to convert a decimal number or 0 if there is unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total, power;
	int test;

	if (b == NULL)
		return (0);

	for (test = 0; b[test]; test++)
	{
		if (b[test] != '0' && b[test] != '1')
			return (0);
	}

	for (power = 1, total = 0, test--; test >= 0; test--, power *= 2)
	{
		if (b[test] == '1')
			total += power;
	}

	return (total);
}
