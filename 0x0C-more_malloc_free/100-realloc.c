#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space
 * @new_size: size, in bytes of the new memory block
 * Return: Null
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *kill;
	unsigned int y;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		kill = malloc(new_size);
		if (kill == NULL)
			return (NULL);
		return (kill);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	kill = malloc(new_size);
	if (kill == NULL)
		return (NULL);
	for (y = 0; y < old_size && y < new_size; y++)
	{
		kill[y] = ((char *) ptr)[y];
	}
	free(ptr);
	return (kill);
}
