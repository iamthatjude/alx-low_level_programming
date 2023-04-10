#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the minimum number of coins to make change
 * for an amount of money
 *
 * Usage: ./change cent [any number of coins: 25, etc]
 *
 * @argc: argument count
 * @argv: argument array based on the count; contains
 * program's command line arguments
 *
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int no_of_coins = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	/* check if argument given "cents" is negative */
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= cents;
		else if (cents >= 10)
			cents -= cents;
		else if (cents >= 5)
			cents -= cents;
		else if (cents >= 2)
			cents -= cents;
		else if (cents >= 1)
			cents -= cents;

		no_of_coins += 1;
	}

	printf("%d\n", no_of_coins);

	return (0);
}
