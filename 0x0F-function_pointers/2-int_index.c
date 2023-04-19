#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches for an integer
 * @array: Array
 * @size: Size of array
 * @cmp: Pointer to function
 * Return: -1 if no element matches, or 1 if If size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		r = cmp(array[i]);
		if (r == 1)
			return (i);
	}

	return (-1);
}
