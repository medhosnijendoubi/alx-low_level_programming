#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int test, j;

	test = 0;

	while (str[test] != '\0')
	{
		test++;
	}

	for (j = 0; j < test; j += 2)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
