#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string input
 * @accept: input
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int e, f;

	for (e = 0; s[e] != '\0'; e++)
	{
		for (f = 0; accept[f] != '\0'; f++)
		{
			if (s[e] == accept[f])
			{
				return (s + e);
			}
		}
	}
	return (0);
}
