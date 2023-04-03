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
	int o;
	int k = 0;
	int p = 0;

	for (l = 0; l < size; l++)
	{
		o = (l * size) + l;
		k += *(a + o);
	}

	for (m = 0; m < size; m++)
	{
		o = (m * size) + (size - 1 - m);
		p += *(a + o);
	}
	printf("%d, %d\n", k, p);
}
