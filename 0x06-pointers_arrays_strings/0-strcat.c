#include "main.h"

/**
 * *_strcat - Concatenates two strings
 *
 * @dest: receiver string (destination)
 * @src: string to be concatenated with @dest (source)
 *
 * Return: pointer goes to dest
*/
char *_strcat(char *dest, char *src)
{
	int destCount = 0, srcCount = 0;

	while (*(dest + destCount) != '\0')
	{
		destCount++;
	}

	while (srcCount >= 0)
	{
		*(dest + destCount) = *(src + srcCount);
		if (*(src + srcCount) == '\0')
			break;
		destCount++;
		srcCount++
	}

	return (dest);
}
