#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - adds positive numbers
 * @argc: argument counter
 * @argv: argument vecotr
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int r;
	unsigned int l, sum = 0;
	char *f;

	if (argc > 1)
	{
		for (r = 1; r < argc; r++)
		{
			f = argv[r];
			for (l = 0; l < strlen(f); l++)
			{
				if (f[l] < 48 || f[l] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(f);
			f++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
