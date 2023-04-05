#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int p, k;

	p = 0;
	k = 0;

	while (dest[p] != '\0')
		p++;

	while (src[k] != '\0' && k < n)
	{
		dest[p] = src[k];
		p++;
		k++;
	}

	dest[p] = '\0';

	return (dest);
}
