#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: constant integer
 * @...: Variable number
 * Return: Sucess
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numb;
	char *str;

	va_start(numb, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(numb, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(numb);
}
