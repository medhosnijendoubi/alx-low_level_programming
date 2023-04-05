#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int p, l, test;

	p = 0;

	while (s[p] != '\0')
	{
		p++;
	}

	test = p;

	for (l = test - 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}

	_putchar('\n');
}
