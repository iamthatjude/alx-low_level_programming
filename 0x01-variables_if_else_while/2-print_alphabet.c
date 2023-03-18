#include <stdio.h>

/**
* main - Prints alphabet in lowercase
*
* Return: Always 0 (Success
*/
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	return (0);
}
