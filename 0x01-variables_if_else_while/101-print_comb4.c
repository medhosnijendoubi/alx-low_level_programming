#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p, x, k;

	for (p = 48; p < 58; p++)
	{
		for (x = 49; x < 58; x++)
		{
			for (k = 50; k < 58; k++)
			{
				if (k > x && x > p)
				{
					putchar(p);
					putchar(x);
					putchar(k);
					if (p != 55 || x != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
