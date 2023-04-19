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
	int i;

	i = 0;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (i < atoi(argv[1]))
	{
		printf("%02x", *((unsigned char *)main + i));
		i++;
		if (atoi(argv[1]) > i)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
