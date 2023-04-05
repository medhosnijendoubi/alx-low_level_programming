#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int p, k, x, test;

	x = 0;

	for (p = 0; s[p] != '\0'; p++)
	{
		test = 0;
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[p] == accept[k])
			{
				x++;
				test = 1;
			}
		}
		if (test == 0)
		{
			return (x);
		}
	}

	return (0);
}
