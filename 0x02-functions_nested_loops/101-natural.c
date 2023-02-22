#include <stdio.h>

/**
 * main - Prints the sum of all the multiples of 3 and 5 up to 1024
 * Return: success
 */

int main(void)
{
	int a, g = 0;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			g += a;
		}
		a++;
	}
	printf("%d\n", g);
	return (0);
}
