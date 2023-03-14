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
	int g, h;
	int **love;

	if (width <= 0 || height <= 0)
		return (NULL);
	love = malloc(sizeof(int *) * height);
	if (love == NULL)
		return (NULL);
	for (g = 0; g < height; g++)
	{
		love = malloc(sizeof(int) * width);
	}
	if (love[g] == NULL)
	{
		for (; g >= 0; g--)
			free(love[g]);
		free(love);
		return (NULL);
	}
	for (g = 0; g < height; g++)
	{
		for (h = 0; h < width; h++)
			love[g][h] = 0;
	}
	return (love);
}
