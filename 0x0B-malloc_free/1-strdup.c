#include <stdlib.h>
#include "main.h"

/**
 * *_strtest - copies the string given as parameter
 * @str: string to testlicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strtest(char *str)
{
	char *test;
	unsigned int i, test1;

	i = 0;
	test1 = 0;

	if (str == NULL)
		return (NULL);

	while (str[test1])
		test1++;

	test = malloc(sizeof(char) * (test1 + 1));

	if (test == NULL)
		return (NULL);

	while ((test[i] = str[i]) != '\0')
		i++;

	return (test);
}
