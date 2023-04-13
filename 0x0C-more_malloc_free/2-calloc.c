#include "maih.h"
#include <stdlib>

/**
 *_calloc - allocates memory for array
 *@nmemb: Members
 *@size: number of bytes
 *Return: Pointer to allocated memory, NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i1, i2;

	i2 = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(i2);

	if (array == NULL)
		return (NULL);


	for (i = 0; i < i2; i++)
		array[i] = 0;

	return (array);
}
