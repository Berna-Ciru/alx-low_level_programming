#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: the number of times to print the diagonal lines
 * Return: empty
 */

void print_diagonal(int n)
{
	int b, d;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 0; b < n; b++)
		{
			for (d = 0; d < b; d++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
