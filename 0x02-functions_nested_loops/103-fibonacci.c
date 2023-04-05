#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;
	unsigned long int l, n, var, x;

	l = 1;
	n = 2;
	x = 0;

	for (j = 1; j <= 33; ++j)
	{
		if (l < 4000000 && (l % 2) == 0)
		{
			x = x + l;
		}
		var = l + n;
		l = n;
		n = var;
	}

	printf("%lu\n", x);

	return (0);
}
