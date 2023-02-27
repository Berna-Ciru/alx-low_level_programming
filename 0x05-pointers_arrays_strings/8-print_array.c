#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @n: number of elements of the array
 * @a: array of integer
 */

void print_array(int *a, int n)
{
	int d;

	for (d = 0; d < n; d++)
	{
		printf("%d", a[d]);
		if (d != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
