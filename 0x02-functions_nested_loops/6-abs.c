#include "main.h"

/**
 * _abs - computes the absolute value of an interger
 * @n: interger to be computed
 * Return: Absolute value of num or 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (0);
}
