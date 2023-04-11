#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int test, j;

	test = 0;

	while (src[test] != '\0')
	{
		test++;
	}

	for (j = 0; j < test; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}
