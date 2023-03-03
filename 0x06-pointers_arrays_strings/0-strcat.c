#include <stdio.h>
#include "main.h"

/**
 * _strcat -  a function that concatenates two strings
 * @dest: destingation string
 * @src: source string
 * Return: pointer to resulting string destination
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, h;

	while (dest[dlen])
	{
		dlen++;
	}
	for (h = 0; src[h] != 0; h++)
	{
		dest[dlen] = src[h];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
