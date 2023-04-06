#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints addition of positive numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 1 If one of the number contains symbols that are not digits
 * or 0 if else
 */

int main(int argc, char *argv[])
{
	int i, d, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (d = 0; argv[i][d]; d++)
		{
			if (argv[i][d] < '0' || argv[i][d] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

			sum = sum + atoi(argv[i]);
	}

		printf("%d\n", sum);

		return (0);
}
