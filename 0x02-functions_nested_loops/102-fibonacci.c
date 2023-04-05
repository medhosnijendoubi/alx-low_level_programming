#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int p, l, n, var;

	l = 1;

	n = 2;

	for (p = 1; p <= 50; ++p)
	{
		if (l != 20365011074)
		{
			printf("%ld, ", l);
		} else
		{
			printf("%ld\n", l);
		}
		var = l + n;
		l = n;
		n = var;
	}

	return (0);
}
