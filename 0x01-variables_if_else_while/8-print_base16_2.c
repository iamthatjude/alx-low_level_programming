#include <stdio.h>

/**
* main - Print all numbers of base 16 in lowercase
* -: 0123456789abcdef | a represents 10 and on
*
* Values & Characters used (ASCII Hex)
* 48 = 0
* 57 = 9
* 97 = a
* 102 = f
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char zero = 48, a = 97;

	while (zero <= 57)
	{
		putchar(zero);
		zero++;
	}

	while (a <= 102)
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
