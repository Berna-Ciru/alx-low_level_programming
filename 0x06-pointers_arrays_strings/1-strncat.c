#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @src: the source string
 * @dest: the destination string
 * @n: number of bytes from src to be concatenated to dest
 * Return: a pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_l = 0;

	while (dest[index++])
	{
		dest_l++;
	}
	for (index = 0; src[index++] && index < n; index++)
	{
		dest[dest_l++] = src[index];
	}
	return (dest);
}
