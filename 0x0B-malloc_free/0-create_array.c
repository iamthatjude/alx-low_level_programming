#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of chars
 *
 * @size: array size
 * @c: char
 *
 * Return: pointer to array
*/
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int counter;

	cr = malloc(sizeof(c) * size);

	if (size == 0 || cr == NULL)
		return (NULL);

	for (counter = 0; counter < size; counter++)
		cr[counter] = c;

	return (cr);
}
