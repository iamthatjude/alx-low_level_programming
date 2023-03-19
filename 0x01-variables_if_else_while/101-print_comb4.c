#include <stdio.h>

/**
* main - Prints different combinations of three digits
*
* Values & Characters used [ASCII table]
* 48 = 0
* 55 = 7
* 56 = 8
* 57 = 9
* 44 = ,
* 32 = [SPACE]
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int a = 48;

	while (a <= 57)
	{
		int b = 48;

		while (b <= 57)
		{
			int c = 48;

			while (c <= 57)
			{
				if ((a != b && a < b) && (b != c && c < b))
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (c == 57 && b == 56 && a == 55)
					{
						break;
					}
					putchar(44);
					putchar(32);
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');

	return (0);
}
