#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int p, l;

		for (p = 0; p < n; p++)
		{
			for (l = 0; l < n; l++)
			{
				if (l == p)
					_putchar('\\');
				else if (l < p)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
