#include "main.h"

/**
 * _strpbrk - Search a string for any set of bytes
 *
 * @s: string to be scanned
 * @accept: string containing the characters to
 * match with @s
 *
 * Return: pointer goes to byte n or NULL
*/
char *_strpbrk(char *s, char *accept)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		for (int j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (NULL);
}
