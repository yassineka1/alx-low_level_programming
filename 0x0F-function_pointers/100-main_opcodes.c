#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function
 * @argc: Number of arguments
 * @argv: Array of pointers to arguments
 * Return: Sucess
 */

int main(int argc, char **argv)
{
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < bytes)
	{
		printf("%.2x", *((unsigned char *)main + i));
		i++;

		if (bytes > i)
		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}
