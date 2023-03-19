#include <stdio.h>

/**
* main - Print alphabet in lowercase but exclude 'q' and 'e'
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int no = 97; /* 97 = 'a' | 123 = 'z' | 101 = 'e' | 113 = 'q' */

	while (no <= 123)
	{
		if (no != 101 && no != 113)
		{
			putchar(no);
		}
		no++;
	}
	putchar('\n');

	return (0);
}
