#include "main.h"

/**
 * check_if_div - Checks if number can be divided
 * @a: number be checked
 * @b: int
 * Return: 0 if number is divisible or -1 if not
 */

int check_if_div(int a, int b)
{
	if (a % b == 0)
		return (0);
	if (b == a / 2)
		return (1);

	return (check_if_div(a, b + 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: Number to be checked
 * Return: 1 if the number is prime or 0 if it's not.
 */

int is_prime_number(int n)
{
	if (n >= 2 && n <= 3)
		return (1);
	if (n <= 1)
		return (0);

	return (check_if_div(n, 2));
}
