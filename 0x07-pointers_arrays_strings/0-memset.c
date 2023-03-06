#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: destination
 * @b: the constant byte
 * @n: number of bytes
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int h;

	for (h = 0; h < n; h++)
	{
		s[h] = b;
	}
	return (s);
}
