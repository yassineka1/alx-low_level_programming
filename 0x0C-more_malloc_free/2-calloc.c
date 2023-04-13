#include "main.h"

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements in an array
 * @size: size on the array
 * Return: pointer string
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*(ptr + i) = 0;

	return (ptr);
}
