#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments
 * @argc: Numberof arguments
 * @argv: array of pointers to arguments
 * Return: Sucess
 */

int main(int argc, char __attribute__((unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
