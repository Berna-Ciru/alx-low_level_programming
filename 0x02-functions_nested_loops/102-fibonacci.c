#include <stdio.h>

/**
 * main - prints the first 52 Fibonacci numbers
 * Return: success
 */

int main(void)
{
	int g = 0;
	long u = 1, l = 2;

	while (g < 50)
	{
		if (g == 0)
			printf("%d", u);
		else if (g == 1)
			printf(", %d", l);
		else
		{
			l += u;
			u = l - u;
			printf(", %d", l);
		}
	++g
	}
	printf("\n");
	return (0);
}
