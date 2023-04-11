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
	int k, l;

	for (k = 0; haystack[k] != '\0'; k++)
	{
		for (l = 0; needle[l] != '\0'; l++)
		{
			if (haystack[k + l] != needle[l])
				break;
		}
		if (!needle[l])
			return (&haystack[k]);
	}
	return (NULL);
}
