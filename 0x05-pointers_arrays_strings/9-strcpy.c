#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to
 * @src: the source of string to be copied
 * @dest: the value destination
 * Return: the pointer to the dest
 */

char *_strcpy(char *dest, char *src)
{
	int l;

	for (l = 0; src[l] != '\0'; l++)
	{
		dest[l] = src[l];
	}
	dest[l++] = '\0';
	return (dest);
}
