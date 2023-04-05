#include "main.h"

/**
 * factorial - Function that returns the factorial of an int
 * @n: integer
 * Return: Factorial of @n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}
