#include "main.h"

/**
 * _strstr - Locate a substring from a given string
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to beginning of string
*/
char *_strstr(char *haystack, char *needle)
{
	char h2, n2;

	while (*haystack != '\0')
	{
		h2 = haystack;
		n2 = needle;

		while (*haystack != '\0' && *n2 != '\0' && *haystack == *n2)
		{
			haystack++;
			n2++;
		}

		if (!*n2)
			return (h2);

		haystack = h2 + 1;
	}

	return (0);
}
