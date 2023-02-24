#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9
 * Declaration: prints the numbers excluding 2 and 4
 * Return: the numbers 0 through 9
 */

void print_most_numbers(void)
{
	int f = 0;

	for (f <= 9; f++)
	{
		if (f == 2 || f == 4)
		{
			continue;
		}
		else
		{
			_putchar(f + '0');
		}
	}
	_putchar('\n');
}
