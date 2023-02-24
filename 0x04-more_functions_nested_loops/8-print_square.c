#include "main.h"

/**
 * print_square - prints a square on the terminal
 * @size: the number of squares or the number of times
 * Return: empty
 */

void print_square(int size)
{
	int g, h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (g = 0; g < size; g++)
		{
			for (h = 0; h < size; h++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
