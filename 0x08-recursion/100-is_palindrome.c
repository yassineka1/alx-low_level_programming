#include "main.h"
/**
 * _strlen_rec - Prints the length of a string.
 * @s: the string to be printed
 * Return: the length of string
 */
int _strlen_rec(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_rec(s + 1));
	return (0);
}
/**
 * palind_check - check if s is palindrome.
 * @s: string base address.
 * @i: left index.
 * @k: rigth index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int palind_check(char *s, int i, int k)
{
	if (s[i] == s[k])
		if (i > k / 2)
			return (1);
		else
			return (palind_check(s, i + 1, k - 1));
	else
		return (0);
}
/**
 * is_palindrome - check if s is palindrome
 * @s: base address for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (palind_check(s, 0, _strlen_rec(s) - 1));
}

