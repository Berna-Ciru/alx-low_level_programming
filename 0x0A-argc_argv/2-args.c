#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argv: the argument vector
 * @argc: the argument counter
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int u;

	for (u = 0; u < argc; u++)
	{
		printf("%s\n", argv[u]);
	}
	return (0);
}
