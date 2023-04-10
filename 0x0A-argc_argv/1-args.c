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
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d\n", argc);

	return (0);
}
