#include "main.h"

/**
* _islower - check for lowercase character
* prints 1 if true or 0 if false
*
* @c: a given character in ASCII
*
* Return: 1 for lowercase and 0 for a different character
*/
int _islower(int c)
{
	char start = 'a';

	while (start <= 'z')
	{
		if (start == c)
			return (1);
		else
			return (0);
		start++;
	}
}
