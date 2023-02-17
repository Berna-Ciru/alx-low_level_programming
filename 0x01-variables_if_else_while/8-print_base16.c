#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int a;
	char toy;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (toy = 'a'; toy <= 'f'; toy++)
		putchar(toy);
	putchar('\n');

	return (0);
}
