#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string input
 * @needle: input
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *yes = haystack;
		char *no = needle;

		while (*yes == *no && *no != '\0')
		{
			yes++;
			no++;
		}

		if (*no == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
