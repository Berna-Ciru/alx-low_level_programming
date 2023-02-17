#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry point
 * Return: Always 0
 */
int main(void)
{
	char cup;

	for (cup = 'z'; cup >= 'a'; cup++)
		putchar(cup);
	putchar('\n');

	return (0);
}
