#include "main.h"

/**
* _isalpha - check if character is lowercase or uppercase
*
* @c: the given character
*
* Return: 1 for lowecase and uppercase. 0 for otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
