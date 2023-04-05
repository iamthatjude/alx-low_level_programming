#include "main.h"

/**
 * _strlen_recursion - Get the length of a string
 *
 * @s: string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * _operation - works to comapre each character of a given string
 *
 * @s: string
 * @i1: smallest iterator
 * @i2: biggest iterator
 *
 * Return: compared value
 */
int _operation(char *s, int i1, int i2)
{
	if (s[i1] == s[i2])
	{
		if (i1 == i2 || i1 == i2 + 1)
			return (1);

		return (0 + _operation(s, i1 + 1, i2 - 1));
	}

	return (0);
}

/**
 * is_palindrome - check if a given string is a palindrome
 *
 * @s: string
 *
 * Return: 1 if s is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (_operation(s, 0, _strlen_recursion(s) - 1));
}
