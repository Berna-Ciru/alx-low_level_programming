#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry point
 * Return: Always 0
 */
int main(void)
{
	int h, k, l;

	for (h = '0'; h < '9'; h++)
	{
		for (k = h + 1; k <= '9'; k++)
		{
			for (l = k + 1; l <= '9'; l++)
			{
				if ((k != h) != l)
				{
					putchar(h);
					putchar(k);
					putchar(l);
					if (h == '7' && k == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
