#include "main.h"

/**
 * _operation - works the square root of the number
 *
 * @n: number
 * @i: iterator
 *
 * Return: square root or -1
*/
int _operation(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}

	return (0 + _operation(n, i + 1));
}

/**
 * _sqrt_recursion - Get the natural square root of a number
 *
 * @n: number
 *
 * Return: Always 0
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	if (n == 1)
		return (1);

	return (_operation(n, 2));
}
