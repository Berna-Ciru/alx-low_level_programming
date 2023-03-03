#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @src: source string
 * @dest: destination string
 * @n: number of bytes to be coppied at most
 * Return: a pointer to the resulting dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_p = 0;

	while (src[index++])
	{
		src_p++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}
	for (index = src_p; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
