#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked -  allocates memory using malloc
 * @b: size of memory to be allocated
 * Return: null
 */

void *malloc_checked(unsigned int b)
{
	void *j;

	j = malloc(b);

	if (j == NULL)
	{
		exit(98);
	}
	return (j);
}
