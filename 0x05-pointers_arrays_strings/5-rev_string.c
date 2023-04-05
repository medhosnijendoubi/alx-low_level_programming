#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char ch;
	int j, test, test1;

	test = 0;
	test1 = 0;

	while (s[test] != '\0')
	{
		test++;
	}

	test1 = test - 1;

	for (j = 0; j < test / 2; j++)
	{
		ch = s[j];
		s[j] = s[test1];
		s[test1--] = ch;
	}
}
