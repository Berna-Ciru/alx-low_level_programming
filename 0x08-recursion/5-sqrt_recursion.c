#include "main.h"
#include <stdio.h>

int _sqrt(int n, int l);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: he number to be checked
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - calcutates the square root of a number
 * @n: the number to be checked
 * @l: the iterate number
 * Return: square root of n
 */

int _sqrt(int n, int l)
{
	int sqrt = l * l;

	if (sqrt > n)
	{
		return (-1);
	}
	else if (sqrt == n)
	{
		return (l);
	}
	return (_sqrt(n, l + 1));
}
