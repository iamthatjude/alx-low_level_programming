#include "main.h"

/**
 * _operation - work the prime of a number
 *
 * @n: number
 * @i: iterator
 *
 * Return: 1 if n is a prime number. 0 if n is not a prime number
 */
int _operation(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}

	return (0 + _operation(n, i + 1));
}

/**
 * is_prime_number - check if the given number is a prime number
 *
 * @n: number
 *
 * Return: Always 0
 */
int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
		return (0);

	return (_operation(n, 2));
}
