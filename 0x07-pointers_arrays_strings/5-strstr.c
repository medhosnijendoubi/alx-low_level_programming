#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int p, k;

	for (p = 0; haystack[p] != '\0'; p++)
	{
		for (k = 0; needle[k] != '\0'; k++)
		{
			if (haystack[p + k] != needle[k])
				break;
		}
		if (!needle[k])
			return (&haystack[p]);
	}
	return (NULL);
}
