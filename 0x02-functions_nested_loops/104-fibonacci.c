#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int p, l, n, x1, x2, v1, v2;

	l = 1;
	n = 2;

	printf("%lu", l);

	for (p = 1; p < 91; p++)
	{
		printf(", %lu", n);
		n = n + l;
		l = n - l;
	}

	x1 = l / 1000000000;
	x2 = l % 1000000000;
	v1 = n / 1000000000;
	v2 = n % 1000000000;

	for (p = 92; p < 99; ++p)
	{
		printf(", %lu", v1 + (v2 / 1000000000));
		printf("%lu", v2 % 1000000000);
		v1 = v1 + x1;
		x1 = v1 - x1;
		v2 = v2 + x2;
		x2 = v2 - x2;
	}

	printf("\n");

	return (0);
}
