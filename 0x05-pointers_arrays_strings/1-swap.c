#include "main.h"

/**
* swap_int - Swap the values of two integers
*
* @a: integer one
* @b: integer two
*
* Return: void
*/

void swap_int(int *a, int *b)
{
	int val_a = *a;
	int val_b = *b;

	*a = val_b;
	*b = val_a;
}
