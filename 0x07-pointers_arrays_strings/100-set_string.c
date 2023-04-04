#include "main.h"

/**
 * set_string - Set the value of a pointer to a char
 *
 * @s: pointer - source
 * @to: pointer - target
 *
 * Return: void
*/
void set_string(char **s, char *to)
{
	*s = to;
}
