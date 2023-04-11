#include "main.h"

/**
 * _strspn - Get the length of a prefix substring
 *
 * @s: string to be scanned
 * @accept: string containing the characters to
 * match with @s
 *
 * Return: the number of bytes from @s
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, alt;

	for (i = 0; s[i] != '\0'; i++)
	{
		alt = 1;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				alt = 0;
				break;
			}
		}
		if (alt == 1)
			break;
	}

	return (i);
}
