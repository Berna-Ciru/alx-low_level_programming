#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @str: the string to be capitalized
 * Return: pointe to the chnaged string.
 */

char *cap_string(char *str)
{
	int fish = 0;

	while (str[fish])
	{
		while (!(str[fish] >= 'a' && str[fish] <= 'z'))
		{
			fish++;
		}
		if (str[fish - 1] == ' ' ||
				str[fish - 1] == '\t' ||
				str[fish - 1] == '\n' ||
				str[fish - 1] == ',' ||
				str[fish - 1] == ';' ||
				str[fish - 1] == '.' ||
				str[fish - 1] == '!' ||
				str[fish - 1] == '?' ||
				str[fish - 1] == '"' ||
				str[fish - 1] == '{' ||
				str[fish - 1] == ']' ||
				str[fish - 1] == '{' ||
				str[fish - 1] == '}' ||
				fish == 0)
		{
			str[fish] -= 32;
			fish++;
		}
	}
	return (str);
}
