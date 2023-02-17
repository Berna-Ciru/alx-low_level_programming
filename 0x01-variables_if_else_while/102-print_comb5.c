#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int r, m;

	for (r = 0; r <= 98; r++)
	{
		for (m = r + 1; m <= 99; m++)
		{
			putchar((r / 10) + '0');
			putchar((r % 10) + '0');
			putchar(' ');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			if (r == 98 && m == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
