#include "main.h"

/**
 * _memcpy - Copy memory area and return pointer to dest
 *
 * @dest: where content is copied to [destination]
 * @src: where content is copied from [source]
 * @n: number of bytes to copy
 *
 * Return: pointer goes to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		dest[counter] = src[counter];
	}

	return (dest);
}
