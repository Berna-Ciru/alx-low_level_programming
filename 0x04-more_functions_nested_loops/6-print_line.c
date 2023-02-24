#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of lines to be drawn
 * Return: empty
 */

void print_line(int n)
{
	int d;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (d = 0; d < n; d++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
