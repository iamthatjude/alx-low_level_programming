#include "main.h"

/**
 * _puts_recursion - Print a string followed by a new line
 *
 * @s: string to be printed
 *
 * Return: void
*/
void _puts_recursion(char *s)
{
	if (*s == NULL)
		_putchar('\0');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
