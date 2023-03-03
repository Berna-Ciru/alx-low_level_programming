#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to be changed
 * Return: pointer to the changed string
 */

char *string_toupper(char *str)
{
	int goat = 0;

	while (str[goat])
	{
		if (str[goat] >= 'a' && str[goat] <= 'z')
		{
			str[goat] -= 32;
			goat++;
		}
	}
	return (str);
}
