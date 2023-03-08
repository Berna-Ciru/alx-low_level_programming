#include "main.h"
#include <stdio.h>

int check_prime(int n, int z);

/**
 * is_prime_number - returns 1 if integer is a prime number, 0 otherwise
 * @n: number to be checked
 * Return: 1 if prime number and 0 for any other value
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - checks if number is prime
 * @n: number to be checked
 * @z: iteration number
 * Return: 1 for prime number, 0 for anything else
 */

int check_prime(int n, int z)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % z == 0 && z > 1)
	{
		return (0);
	}
	if ((n / z) < z)
	{
		return (1);
	}
	return (check_prime(n, z + 1));
}
