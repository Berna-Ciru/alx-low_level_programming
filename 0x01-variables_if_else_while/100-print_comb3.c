#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int g, d;

	for (g = '0'; g < '9'; g++)
	{
		for (d = g + 1; d <= '9'; d++)
		{
			if (g != d)
			{
				putchar(g);
				putchar(d);
				if (g == '8' && d == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
