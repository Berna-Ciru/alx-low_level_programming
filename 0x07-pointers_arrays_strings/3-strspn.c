#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string input
 * @accept: input
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int y = 0;
	int g;

	while (*s)
	{
		for (g = 0; accept[g]; g++)
		{
			if (*s == accept[g])
			{
				y++;
				break;
			}
			else if (accept[g + 1] == '\0')
			{
				return (y);
			}
		}
		s++;
	}
	return (y);
}
