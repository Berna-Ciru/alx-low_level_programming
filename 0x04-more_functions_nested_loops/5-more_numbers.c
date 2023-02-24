#include "main.h"

/**
 * more_numbers - prints the numbers 0 to 14 ten times
 * Return: the numbers 0 to 14 ten times
 */

void more_numbers(void)
{
	int r, k;

	for (r = 0; r < 10; r++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k > 9)
			{
				_putchar((k / 10) + '0');
			}
			_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
