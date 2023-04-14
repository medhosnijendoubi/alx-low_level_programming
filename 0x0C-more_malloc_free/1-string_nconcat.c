#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, k = 0, test1 = 0, test2 = 0;

	while (s1 && s1[test1])
		test1++;
	while (s2 && s2[test2])
		test2++;

	if (n < test2)
		s = malloc(sizeof(char) * (test1 + n + 1));
	else
		s = malloc(sizeof(char) * (test1 + test2 + 1));

	if (!s)
		return (NULL);

	while (i < test1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < test2 && i < (test1 + n))
		s[i++] = s2[k++];

	while (n >= test2 && i < (test1 + test2))
		s[i++] = s2[k++];

	s[i] = '\0';

	return (s);
}
