#include "main.h"
#include <stdio.h>

/**
 * main -  prints the number of arguments
 * @argv: argument vector
 * @argc: the argumet counter
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
