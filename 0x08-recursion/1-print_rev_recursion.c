#include "main.h"

/**
 * _print_rev_recursion - print reversd string
 * @s: string
 * Return: Success
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
