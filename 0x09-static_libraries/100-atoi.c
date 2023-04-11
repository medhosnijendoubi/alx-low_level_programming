#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int j, k, x, test, p, test1;

	j = 0;
	k = 0;
	x = 0;
	test = 0;
	p = 0;
	test1 = 0;

	while (s[test] != '\0')
		test++;

	while (j < test && p == 0)
	{
		if (s[j] == '-')
			++k;

		if (s[j] >= '0' && s[j] <= '9')
		{
			test1 = s[j] - '0';
			if (k % 2)
				test1 = -test1;
			x = x * 10 + test1;
			p = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			p = 0;
		}
		j++;
	}

	if (p == 0)
		return (0);

	return (x);
}
