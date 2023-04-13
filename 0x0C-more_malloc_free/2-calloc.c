#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: elements of array
 * @size: bytes of the array
 *
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a, b;
	char *arr;

	b = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(b);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (a = 0 ; a < b ; a++)
	{
		arr[b] = 0;
	}
	return (arr);
}
