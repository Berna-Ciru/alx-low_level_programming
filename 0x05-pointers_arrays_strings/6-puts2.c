#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * @str: the string to be checked
 * Return: void
 */

void puts2(char *str)
{
	int o;
	int p = 0;

	while (str[p] != '\0')
	{
		p++;
	}
	for (o = 0; o  < p; o -= 2)
	{
		_putchar(str[o]);
	}
	_putchar('\n');
}
