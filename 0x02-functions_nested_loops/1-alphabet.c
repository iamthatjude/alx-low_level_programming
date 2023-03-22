#include "main.h"

/**
* main - Prints alphabets in lowercase
*
* Return: Always 0
*/
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}

void print_alphabet(void)
{
	char start = 'a';

	while (start <= 'z')
	{
		_putchar(start);
		start++;
	}
}
