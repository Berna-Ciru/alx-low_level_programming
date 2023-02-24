#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: the number to be checked
 * Return: 1 for an uppercase character, 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
