#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int p, x;

	for (p = 48; p <= 56; p++)
	{
		for (x = 49; x <= 57; x++)
		{
			if (x > p)
			{
				putchar(p);
				putchar(x);
				if (p != 56 || x != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
