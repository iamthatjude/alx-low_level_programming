#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * followed by a new line
 *
 * @argc: argument count
 * @argv: argument array based on the count; contains
 * program's command line arguments
 *
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
