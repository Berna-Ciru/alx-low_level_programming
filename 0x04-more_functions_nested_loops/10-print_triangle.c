#include "main.h"

/**
 * print_triangle - prints a triangle in the terminal
 * @size: the size of the triangle
 * Return: empty
 */

void print_triangle(int size)
{
	int g, h, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (g = 0; g < size; g++)
		{
			for (h = size - g; h > 1; h--)
			{
				_putchar(32);
			}
			for (j = 0; j <= g; j++)
			{
				_putcha(35);
			}
			_putchar('\n');
		}
	}
}
