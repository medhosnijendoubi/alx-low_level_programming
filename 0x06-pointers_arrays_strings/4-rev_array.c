#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int p, k, x;

	k = n - 1;

	for (p = 0; p < n / 2; p++)
	{
		x = a[p];
		a[p] = a[k];
		a[k--] = x;
	}
}
