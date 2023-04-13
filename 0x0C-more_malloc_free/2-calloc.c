#include "maih.h"
#include <stdlib>
#include <stdio>

/**
 *_calloc - allocates memory for array
 *@nmemb: Members
 *@size: number of bytes
 *Return: Pointer to allocated memory, NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
