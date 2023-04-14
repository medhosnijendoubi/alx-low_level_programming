#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *test;
	int j, test1;

	if (min > max)
		return (NULL);

	test1 = max - min + 1;

	test = malloc(test1of(int) * test1);

	if (test == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		test[j] = min++;

	return (test);
}
