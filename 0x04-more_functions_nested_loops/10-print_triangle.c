#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int p, l;

		for (p = 1; p <= size; p++)
		{
			for (l = p; l < size; l++)
			{
				_putchar(' ');
			}

			for (l = 1; l <= p; l++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
