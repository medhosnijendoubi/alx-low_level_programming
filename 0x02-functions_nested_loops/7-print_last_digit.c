#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int p;

	if (n < 0)
		n = -n;

	p = n % 10;

	if (p < 0)
		p = -p;

	_putchar(p + '0');

	return (p);
}
