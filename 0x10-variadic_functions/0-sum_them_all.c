#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting som
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int j;
	int som = 0;
	va_list test;

	va_start(test, n);

	for (j = 0; j < n; j++)
		som += va_arg(test, int);

	va_end(test);

	return (som);
}
