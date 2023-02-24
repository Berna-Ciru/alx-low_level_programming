#include "main.h"

/**
 * print_numbers - prints numbers 0 through 9
 * Return: numbers 0 to 9
 */

void print_numbers(void)
{
	int p;

	for (p = 0; p <= 9; p++)
	{
		_putchar(p + '0');
	}
	_putchar('\n');
}
