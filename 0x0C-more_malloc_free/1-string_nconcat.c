#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: string input
 * @s2: string input
 * @n: integer
 * Return: nothing
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, c = 0, d = 0;
	char *df;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;
	while (s2[c])
		c++;
	if (n >= c)
		d = a + c;
	else
		d = a + n;
	df = malloc(sizeof(char) * d + 1);
	if (df == NULL)
		return (NULL);
	c = 0;
	while (b < d)
	{
		if (b <= a)
			df[b] = s1[b];
		if (b >= a)
		{
			df[b] = s2[c];
			c++;
		}
		b++;
	}
	df[b] = '\0';
	return (df);
}
