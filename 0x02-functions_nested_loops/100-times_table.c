#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int p, l, x;

	if (n >= 0 && n <= 15)
	{
		for (p = 0; p <= n; p++)
		{
			for (l = 0; l <= n; l++)
			{
				x = l * p;
				if (l == 0)
				{
					_putchar(x + '0');
				} else if (x < 10 && l != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(x + '0');
				} else if (x >= 10 && x < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
				} else if (x >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((x / 100) + '0');
					_putchar(((x / 10) % 10) + '0');
					_putchar((x % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
