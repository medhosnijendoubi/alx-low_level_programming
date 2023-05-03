#include "variadic_functions.h"

/**
 * print_strings - will print all strings
 * @n: is a number of a argument
 * @separator:is a separator between the string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	char *test;

	va_list list;

	va_start(list, n);

	for (j = 0; j < n; j++)
	{
		test = va_arg(list, char *);
		if (!test)
			test = "(nil)";
		if (!separator)
			printf("%s", test);
		else if (separator && j == 0)
			printf("%s", test);
		else
			printf("%s%s", separator, test);
	}

	printf("\n");

	va_end(list);
}
