#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int p, k;

	char test[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (p = 0; s[p] != '\0'; p++)
	{
		if (p == 0 && s[p] >= 'a' && s[p] <= 'z')
			s[p] -= 32;

		for (k = 0; k < 13; k++)
		{
			if (s[p] == test[k])
			{
				if (s[p + 1] >= 'a' && s[p + 1] <= 'z')
				{
					s[p + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
