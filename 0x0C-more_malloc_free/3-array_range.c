#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum
 * @max: maximum
 * Return: array of intgers
 */

int *array_range(int min, int max)
{
	int *b, s = 0;

	if (min > max)
		return (NULL);
	b = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (b == NULL)
		return (NULL);
	while (min <= max)
	{
		b[s] = min;
		s++;
		min++;
	}
	return (b);
}
