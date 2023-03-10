#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: the argument counter
 * @argv: the argument vector
 * Return: if no. of args is not exactly one,1 otherwise 0
 */

int main(int argc, char *argv[])
{
	int cts, cns = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cts = atoi(argv[1]);
	while (cts > 0)
	{
		cns++;
		if ((cts - 25) >= 0)
		{
			cts -= 25;
			continue;
		}
		if ((cts - 10) >= 0)
		{
			cts -= 10;
			continue;
		}
		if ((cts - 5) >= 0)
		{
			cts -= 5;
			continue;
		}
		else if ((cts - 2) >= 0)
		{
			cts -= 2;
			continue;
		}
		cts--;
	}
	printf("%d\n", cns);
	return (0);
}
