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
    int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		int bool = 1;
		for (int j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}

	return (i);
}
