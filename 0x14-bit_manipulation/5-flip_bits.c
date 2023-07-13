#include "main.h"
#include <stdio.h>

/**
 * flip_bits - used to flip a bits to convert just one number to another number
 * @n: is a first number
 * @m: is a second number to convert it
 * Return: is a number of a bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int test;
	int test2;

	test = n ^ m;
	test2 = 0;

	while (test)
	{
		test2++;
		test &= (test - 1);
	}

	return (test2);
}


