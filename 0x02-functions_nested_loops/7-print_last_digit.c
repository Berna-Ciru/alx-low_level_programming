#include "main.h"

/**
 * print_last_digit - prints the last digit of a num
 * @n: the number to be checked
 * Return: value of the last digit of num
 */

int print_last_digit(int n)
{
	int lnum;

	lnum = n % 10;
	if (lnum < 0)
	{
		lnum = lnum * -1;
	}
	_putchar(lnum + '0');
	return (lnum);
}
