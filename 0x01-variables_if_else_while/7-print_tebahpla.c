#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char vh;

	for (vh = 'z'; vh >= 'a'; vh--)
	{
		putchar(vh);
	}
	putchar('\n');
	return (0);
}
