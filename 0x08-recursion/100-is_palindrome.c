#include "main.h"

/**
 * check_strlen - Length of a string
 * @s: string
 * Return: Length of string
 */

int check_strlen(char *s)
{
	int length = 0;

	if (*(s + length))
	{
		length++;
		length += check_strlen(s + length);
	}
	return (length);
}

/**
 * check_palind - Checks if a string is a palindrome
 * @s: string
 * @length: Length of string
 * @i: index of string
 * Return: -1 if string isa palindrome or 0 if not
 */

int check_palind(char *s, int length, int i)
{
	if (s[i] == s[length / 2])
		return (1);
	if (s[i] == s[length - i - 1])
		return (check_palind(s, length, i + 1));
	return (0);
}

/**
 * is_palindrome - Cheks if a string is a palindrome
 * @s: string
 * Return: -1 if the string is a palindrome or 0 if not
 */

int is_palindrome(char *s)
{
	int i = 0;
	int length = check_strlen(s)
		if (!(*s))
			return (1);
	return (check_palind(s, length, i));
}
