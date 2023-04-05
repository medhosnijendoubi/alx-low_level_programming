#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int x1, x2, x;
	int j;

	x1 = 0;
	x2 = 0;
	x = 0;

	for (j = 0; j < 1024; ++j)
	{
		if ((j % 3) == 0)
		{
			x2 = x2 + j;
		} else if ((j % 5) == 0)
		{
			x2 = x2 + j;
		}
	}
	x = x1 + x2;
	printf("%lu\n", x);
	return (0);
}
