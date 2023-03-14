#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: the second string
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *w;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;
	while (s2[b])
		b++;
	d = a + b;
	w = malloc((sizeof(char) * d) + 1);
	if (w == NULL)
		return (NULL);
	b = 0;
	while (c < d)
	{
		if (c <= a)
			w[c] = s1[c];
		if (c >= a)
		{
			w[c] = s2[b];
			b++;
		}
		c++;
	}
	w[c] = '\0';
	return (w);
}
