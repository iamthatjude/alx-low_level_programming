#include "main.h"

/**
 * *_strncpy - Copy strings
 *
 * @dest: receiver string [destination]
 * @src: string to be concatenated with @dest [source]
 * @n: byte used from src
 *
 * Return: pointer goes to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[count] = src[count];
	}
	for ( ; count < n; count++)
	{
		dest[count] = '\0';
	}

	return (dest);
}
