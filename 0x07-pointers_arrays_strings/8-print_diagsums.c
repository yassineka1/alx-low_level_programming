#include "main.h"
#include <stdio>

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: size of matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int l;
	int m;
	int k = 0;
	int p = 0;

	for (l = 0; l < size; l++)
	{
		k = k + *(a + l * sizeof(int));
	}

	for (m = 0; m < size; m++)
	{
		p = p + *(a + (size * m) + (size - m - 1));
	}
	printf("%d, %d\n", k, p);
}
