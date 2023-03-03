#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: the first srting to be checked
 * @s2: the second string
 * Return: if s1 == s2, then 0
 * if s1 < s2, the negative difference
 * if s1 > s2, the positive difference
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s2++;
		s1++;
	}
	return (*s1 - *s2);
}
