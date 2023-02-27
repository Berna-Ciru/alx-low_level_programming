#include "main.h"

/**
 * _atoi - a function that converts a string to an integer
 * @s: the string to be converted
 * Return: an integer
 */

int _atoi(char *s)
{
	int u = 0;
	unsigned int ni = 0;
	int yin = 1;
	int ubu = 0;

	while (s[u])
	{
		if (s[u] == 45)
		{
			yin *= -1;
		}
		while (s[u] >= 48 && s[u] <= 57)
		{
			ubu = 1;
			ni = (ni * 10) + (s[u] - '0');
			u++;
		}
		if (ubu == 1)
		{
			break;
		}
		u++;
	}
	ni *= yin;
	return (ni);
}
