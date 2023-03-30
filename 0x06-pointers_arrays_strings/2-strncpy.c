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
	return (strncpy(dest, src, n));
}
