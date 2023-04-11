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
	int k, l, p, test;

	p = 0;

	for (k = 0; s[k] != '\0'; k++)
	{
		test = 0;
		for (l = 0; accept[l] != '\0'; l++)
		{
			if (s[k] == accept[l])
			{
				p++;
				test = 1;
			}
		}
		if (test == 0)
		{
			return (p);
		}
	}

	return (0);
}
