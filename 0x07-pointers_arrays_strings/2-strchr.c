#include "main.h"
#include <string.h>

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
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}