#include "main.h"

/**
 * _strchr - Locate a character in a given string
 *
 * @s: string to be scanned
 * @c: character to be searched for
 *
 * Return: pointer goes to 1st occurrence of @c or
 * NULL if character is not found.
*/
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	if (s[i] == c)
		return (s + i);

	return ('\0');
}
