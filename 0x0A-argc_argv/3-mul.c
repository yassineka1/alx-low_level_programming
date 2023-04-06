#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints multiplication of 2 numbers
 * @argc: Number of arguments
 * @argv: Array of pointers to arguments
 * Return: 0 if the program receives 2 arguments or -1 if not
 */

int main(int argc, char *argv[])
{
	int n1, n2, mltp;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mltp = n1 * n2;

	printf("%d\n", mltp);

	return (0);
}
