#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int j;

	unsigned int x1, x2;

	x1 = 0;
	x2 = 0;

	for (j = 0; j < size; j++)
	{
		x1 += a[(size * j) + j];
		x2 += a[(size * (j + 1)) - (j + 1)];
	}

	printf("%d, %d\n", x1, x2);
}
