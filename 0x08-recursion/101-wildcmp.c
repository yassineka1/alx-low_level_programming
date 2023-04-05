#include "main.h"

/**
 * string_check - checks if strings are identical.
 * @s1: first string
 * @s2: second string
 * @i: index 1
 * @k: index 2
 * Return: 1 if string is palindrome or 0 if not
 */

int string_check(char *s1, char *s2, int i, int k)
{
	if (s1[i] == '\0' && s2[k] == '\0')
		return (1);
	if (s1[i] == s2[k])
		return (string_check(s1, s2, i + 1, k + 1));
	if (s1[i] == '\0' && s2[k] == '*')
		return (string_check(s1, s2, i, k + 1));
	if (s2[k] == '*')
		return (string_check(s1, s2, i + 1, k) || string_check(s1, s2, i, k + 1));
	return (0);
}

/**
 * wildcmp - check if strings are identical
 * @s1: first string.
 * @s2: second string.
 *
 * Return: 1 if strings are considered identical.
 */

int wildcmp(char *s1, char *s2)
{
	return (string_check(s1, s2, 0, 0));
}
