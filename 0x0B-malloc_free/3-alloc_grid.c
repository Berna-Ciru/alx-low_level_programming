#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @height: height of the array
 * @width: width of the array
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int a, b, c, d;
	int **love;

	if (width <= 0 || height <= 0)
		return (NULL);
	love = malloc(sizeof(int *) * height);
	if (love == NULL)
	{
		free(love);
		return(NULL);
	}
	for (a = 0; a < height; a++)
	{
		love[a] = malloc(sizeof(int) * width);
		if (love[a] == NULL)
		{
			for (b = a; b >= 0; b--)
				free(love[b]);
			free(love);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
		{
			love[c][d] = 0;
		}
	}
	return (love);
}
