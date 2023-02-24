#include "main.h"

/**
 * _isdigit - checks whether a character is a digit
 * @c: the character to be cheked
 * Return: 1 if a character is a digit and 0 for anything else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
