#include "main.h"

/**
 * _strchr -  function that locates a character in a string
 * @s: the string to be checked input
 * @c: input
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int u;

	for (u = 0; s[u] >= '\0'; u++)
	{
		if (s[u] == c)
		{
			return (s + u);
		}
	}
	return (0);
}
