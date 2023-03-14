#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: duplicated string
 * Return: the duplicated string
 */

char *_strdup(char *str)
{
	int j = 0, l = 1;
	char *d;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[l])
	{
		l++;
	}
	d = malloc((sizeof(char) * l) + 1);
	if (d == NULL)
	{
		return (NULL);
	}
	while (j < l)
	{
		d[j] = str[j];
		j++;
	}
	d[j] = '\0';
	return (d);
}
