#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int f = 0;

	while (s[f] != '\0')
	{
		f++;
	}

	for (f -= 1; f >= 0; f--)
	{
		_putchar(s[f]);
	}
	_putchar('\n');
}
