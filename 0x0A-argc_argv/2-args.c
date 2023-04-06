#include <stdio.h>

/**
 * main - Prints all received arguments
 * @argc: Number of arguments
 * @argv: Array of pointers to arguments
 * Return: Sucess
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);

	return (0);
}
