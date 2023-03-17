#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: input
 * @size: size of array
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int y = 0, z = 0;
	char *q;

	if (nmemb == 0 || size == 0)
		return (NULL);
	z = nmemb * size;
	q = malloc(z);
	if (q == NULL)
		return (NULL);
	while (y < z)
	{
		q[y] = 0;
		y++;
	}
	return (q);
}
