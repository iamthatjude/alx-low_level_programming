#include "main.h"

/**
* print_alphabet - Prints alphabets in lowercase
*
* Return: Always 0
*/
void print_alphabet(void)
{
	char start = 'a';

	while (start <= 'z')
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}
