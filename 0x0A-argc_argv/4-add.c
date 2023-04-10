#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Add positive numbers given via command line
 *
 * @argc: argument count
 * @argv: argument array based on the count; contains
 * program's command line arguments
 *
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int add = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		/* for each looping, get the current argument */
		char *argument = argv[i];

		for (j = 0; j < argument[j]; j++)
		{
			if (!isdigit(argument[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		add += atoi(argument);
	}

	printf("%d\n", add);

	return (0);
}
