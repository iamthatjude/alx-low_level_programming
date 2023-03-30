#include "main.h"

/**
 * *_strncat - Concatenates two strings
 *
 * @dest: receiver string [destination]
 * @src: string to be concatenated with @dest [source]
 * @n: byte used from src
 *
 * Return: pointer goes to dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int destCount = 0, srcCount = 0;

	while (*(dest + destCount) != '\0')
	{
		destCount++;
	}

	while (srcCount < n)
	{
		*(dest + destCount) = *(src + srcCount);
		if (*(src + srcCount) == '\0')
			break;
		destCount++;
		srcCount++;
	}

	return (dest);
}
