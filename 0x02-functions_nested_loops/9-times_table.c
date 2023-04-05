#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int p, l, n;

	for (p = 0; p < 10; p++)
	{
		for (l = 0; l < 10; l++)
		{
			n = l * p;
			if (l == 0)
			{
				_putchar(n + '0');
			}

			if (n < 10 && l != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(n + '0');
			} else if (n >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
