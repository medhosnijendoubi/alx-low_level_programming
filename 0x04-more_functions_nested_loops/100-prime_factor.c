#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int x; 
	long int m;
	long int j;

	x = 612852475143;
	m = -1;

	while (x % 2 == 0)
	{
		m = 2;
		x /= 2;
	}

	for (j = 3; j <= sqrt(x); j = j + 2)
	{
		while (x % j == 0)
		{
			m = j;
			x = x / j;
		}
	}

	if (x > 2)
		m = x;

	printf("%ld\n", m);

	return (0);
}
