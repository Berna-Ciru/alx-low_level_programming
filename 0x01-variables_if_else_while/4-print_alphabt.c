#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	char meo

	for (meo = 'a'; meo <= 'z'; meo++)
	{
		if (meo != 'e' && meo != 'q')
			putchar(meo);
	}
	putchar('\n');
	return (0);
}
