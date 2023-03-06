#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: the destination input
 * @src: the source input
 * @n: the input
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
	{
		dest[y] = src[y];
	}
	return (dest);
}
