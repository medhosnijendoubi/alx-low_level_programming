#include "variadic_functions.h"

/**
 * print_all - that will print all anything
 * @format: is a list of type of a arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *test, *test2 = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", test2, va_arg(list, int));
					break;
				case 'j':
					printf("%s%d", test2, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", test2, va_arg(list, double));
					break;
				case 's':
					test = va_arg(list, char *);
					if (!test)
						test = "(nil)";
					printf("%s%s", test2, test);
					break;
				default:
					j++;
					continue;
			}
			test2 = ", ";
			j++;
		}
	}

	printf("\n");
	va_end(list);
}
