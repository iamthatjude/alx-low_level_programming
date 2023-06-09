#include "function_pointers.h"

/**
 * print_name - Prints a name
 *
 * @name: input name
 * @f: function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
