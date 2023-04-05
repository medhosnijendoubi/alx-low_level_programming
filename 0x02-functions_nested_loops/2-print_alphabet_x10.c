#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char vh;
	int j;

	j = 0;

	while (j < 10)
	{
		vh = 'a';
		while (vh <= 'z')
		{
			_putchar(vh);
			vh++;
		}
		_putchar('\n');
		j++;
	}
}
