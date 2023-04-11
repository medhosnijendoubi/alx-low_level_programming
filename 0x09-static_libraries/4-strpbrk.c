#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: stringcontaining the bytes to look for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int k, l;

	for (k = 0; *s != '\0'; k++)
	{
		for (l = 0; accept[l] != '\0'; l++)
		{
			if (*s == accept[l])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
