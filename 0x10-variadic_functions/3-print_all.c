#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints any type of parameters
 * @format: type of arguments passed to fuction
 * @...: variable number
 * Return: Sucess
 */

void print_all(const char * const format, ...)
{
	int i;
	char *ptr;
	char *space;
	va_list numb;

	va_start(numb, format);
	i = 0;

	while (format && format[j])
	{
		space = "";

		if (format[i + 1])
			space = ", ";
		switch (format[i])
		{

		case 'c':
			printf("%c%s", va_arg(numb, int), space);
			break;

		case 'i':
			printf("%d%s", va_arg(numb, int), space);
			break;

		case 'f':
			printf("%f%s", va_arg(numb, double), space);
			break;

		case 's':
			ptr = va_arg(numb, char *);
			if (!ptr || !*ptr)
				ptr = "(nil)";
			printf("%s%s", ptr, space);
			break;
		}
		i++;
	}
	printf("\n");
}
