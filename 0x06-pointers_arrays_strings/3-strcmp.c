#include "main.h"

/**
 * _strcmp - Compare two strings
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: Always 0
*/
int _strcmp(char *s1, char *s2)
{
	int flag = 0, i = 0;

	while (i == 0)
	{
		if ((*(s1 + i) != '\0') && (*(s2 + i) != '\0'))
			break;
		flag = s1[i] - s2[i];
		i++;
	}

	return (flag);
}
