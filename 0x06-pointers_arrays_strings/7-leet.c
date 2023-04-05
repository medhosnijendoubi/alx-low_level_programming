#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int p, k;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (p = 0; s[p] != '\0'; p++)
	{
		for (k = 0; k < 10; k++)
		{
			if (s[p] == a[k])
			{
				s[p] = b[k];
			}
		}
	}

	return (s);
}
