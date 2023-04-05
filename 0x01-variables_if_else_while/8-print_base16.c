#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p;
	char vh;

	for (p = 48; p < 58; p++)
	{
		putchar(p);
	}
	for (vh = 'a'; vh <= 'f'; vh++)
	{
		putchar(vh);
	}
	putchar('\n');
	return (0);
}
