#include "main.h"

/**
 * puts_half -  function that prints half of a string
 * @str: the string to be halved
 * Return: void
 */

void puts_half(char *str)
{
	int g = 0;
	int h;

	while (str[g] != '\0')
	{
		g++;
	}
	if (g % 2 == 1)
	{
		h = (g - 1) / 2;
		h += 1;
	}
	else
	{
		h = g / 2;
	}
	for (; h < g; h++)
	{
		_putchar(str[h]);
	}
	_putchar('\n');
}
