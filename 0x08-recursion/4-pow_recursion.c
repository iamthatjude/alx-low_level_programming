#include "main.h"

/**
 * _pow_recursion - Get the value of @x raise to the
 * power of @y
 *
 * @x: first integer
 * @y: second integer
 *
 * Return: Always 0
*/
int _pow_recursion(int x, int y)
{
	int ret;

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	ret = x * _pow_recursion(x, (y - 1));

	return (ret);
}
