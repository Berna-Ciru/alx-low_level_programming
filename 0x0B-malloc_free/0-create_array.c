#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @c: the characters to fill the array
 * @size: the size of the array
 * Return: a filled array of chars
 */

char *create_array(unsigned int size, char c)
{
	unsigned int y;
	char *t;

	if (size == 0)
	{
		return (0);
	}
	t = malloc(size * sizeof(char));
	if (t == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < size; y++)
	{
		t[y] = c;
	}
	return (t);
}
