#include "main.h"

/**
 * _pow_recursion - prints value of x raised to the power of y
 * @x: the value to be multiplied
 * @y: number of times to multiply x
 * Retun; value of x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
