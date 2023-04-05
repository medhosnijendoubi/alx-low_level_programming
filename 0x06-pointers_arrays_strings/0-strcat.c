#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int p, k;

	p = 0;
	k = 0;

	while (dest[p] != '\0')
		p++;

	while (src[k] != '\0')
	{
		dest[p] = src[k];
		k++;
		p++;
	}

	dest[p] = '\0';

	return (dest);
}
