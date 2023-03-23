#include "main.h"

/**
* _abs - prints the absolute value of an integer
*
* @val: the given integer
*
* Return: 1 or 0
*/
int _abs(int val)
{
	if (val > 0)
		return (1);
	else if (val == 0)
		return (0);
	else
		return (val * -1);
}
