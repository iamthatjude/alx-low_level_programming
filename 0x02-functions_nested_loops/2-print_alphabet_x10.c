#include "main.h"

/**
* print_alphabet_x10 - Prints alphabets in lowercase 10 times
* followed by a new line.
*
* Return: Always 0
*/
void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char x10 = 'a';

		while (x10 <= 'z')
		{
			_putchar(x10);
			x10++;
		}
		_putchar('\n');
		count++;
	}
}
