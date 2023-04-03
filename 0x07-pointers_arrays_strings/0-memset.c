#include "main.h"

/**
 * _memset - Fill memory with a constant byte
 *
 * @s: memory address to be filled
 * @b: value to be filled
 * @n: number of bytes to fill
 *
 * Return: Always 0 | void
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}

	return (s);
}
