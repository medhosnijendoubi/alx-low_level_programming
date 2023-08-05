#include "main.h"
#include <stdio.h>

/**
 * print_binary - used to print a binary representation of an number
 * @n: is a decimal number used to print as a binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int test;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temp = n, test = 0; (temp >>= 1) > 0; test++)
		;

	for (; test >= 0; test--)
	{
		if ((n >> test) & 1)
			printf("1");
		else
			printf("0");
	}
}

